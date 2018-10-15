// Copyright (c) 2018, nebula.im
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

// Authors: Benqi(wubenqi@gmail.com)

#include "frontend/backend_client_handler.h"

#include "nebula/base/id_util.h"
#include "nebula/base/time_util.h"

#include "nebula/net/zproto/zproto_package_data.h"
#include "nebula/net/handler/zproto/zproto_message_handler_util.h"
#include "frontend/frontend_server_handler.h"

void BackendClientHandler::Initialize_ZProtoEvent() {
  ZProtoEventCallback::Initializer(
      [](nebula::TcpServiceBase* service, nebula::ZProtoPipeline* pipeline) -> int {
        auto h = pipeline->getHandler<ZProtoHandler>();
        DCHECK(h);

        auto handler = std::make_shared<BackendClientHandler>(service, pipeline, h->GetConnID());
        h->SetAttachData(handler);

        return handler->OnNewConnection();
      },
      [](nebula::ZProtoPipeline* pipeline, zproto::PackageMessagePtr message_data) -> int {
        auto h = pipeline->getHandler<ZProtoHandler>();
        DCHECK(h);

        auto handler = h->CastByGetAttachData<BackendClientHandler>();

        if (!handler) {
          LOG(ERROR) << "OnDataReceived - CastByGetAttachData";
          return -1;
        }

        return handler->OnDataReceived(message_data);
      },
      [](nebula::TcpServiceBase* service, nebula::ZProtoPipeline* pipeline) -> int {
        auto h = pipeline->getHandler<ZProtoHandler>();
        DCHECK(h);

        auto handler = h->CastByGetAttachData<BackendClientHandler>();

        if (!handler) {
          LOG(ERROR) << "OnConnectionClosed - CastByGetAttachData";
          return -1;
        }

        return handler->OnConnectionClosed();
      });
}

///////////////////////////////////////////////////////////////////////////////////////
int BackendClientHandler::OnNewConnection() {
  return 0;
}

uint64_t GetConnID(zproto::PackageMessagePtr message_data) {
  const std::vector<zproto::ZProtoMetadata::OptionData>& ops = message_data->options();
  if (ops.size() == 0) {
    return 0;
  } else {
    return ops[0].data.n;
  }
}

int BackendClientHandler::OnDataReceived(zproto::PackageMessagePtr message_data) {
  auto conn_id = GetConnID(message_data);

  auto evb = nebula::NetEngineManager::GetInstance()->GetEventBaseByThreadID(conn_id>>32);
  if (!evb) {
    // 不可能发生，消息数据被篡改了
    LOG(ERROR) << "OnDataReceived - invalid error, not find thread_id: " << nebula::ToString(conn_id);
    return -1;
  }

  // 转发给front_server_handler线程
  evb->runInEventBaseThread([conn_id, message_data]() {
    auto& conn_manager2 = nebula::GetConnManagerByThreadLocal();
    auto pipeline = conn_manager2.FindPipeline(conn_id);
    if (pipeline) {
      auto handler = pipeline->getHandler<MTProtoHandler>()->CastByGetAttachData<FrontendServerHandler>();
      handler->OnBackendDataArrived(std::static_pointer_cast<zproto::Push>(message_data));
    } else {
      LOG(ERROR) << "Recv auth_rsp, but client closed, message_data: " << message_data->ToString();
    }
  });

  return 0;
}

int BackendClientHandler::OnConnectionClosed() {
  return 0;
}

