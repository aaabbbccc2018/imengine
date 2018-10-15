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

#include "frontend/frontend_server_handler.h"

#include "nebula/base/id_util.h"
#include "nebula/base/time_util.h"
#include "nebula/net/handler/zproto/zproto_message_handler_util.h"

extern uint32_t GetServerID();

void FrontendServerHandler::Initialize_MTProtoEvent() {
  MTProtoEventCallback::Initializer(
      [](nebula::TcpServiceBase* service, nebula::MTProtoPipeline* pipeline) -> int {
        auto h = pipeline->getHandler<MTProtoHandler>();
        DCHECK(h);

        auto handler = std::make_shared<FrontendServerHandler>(service, pipeline, h->GetConnID());
        h->SetAttachData(handler);

        return handler->OnNewConnection();
      },
      [](nebula::MTProtoPipeline* pipeline, std::unique_ptr<folly::IOBuf> message_data) -> int {
        auto h = pipeline->getHandler<MTProtoHandler>();
        DCHECK(h);

        auto handler = h->CastByGetAttachData<FrontendServerHandler>();

        if (!handler) {
          LOG(ERROR) << "OnDataReceived - CastByGetAttachData";
          return -1;
        }

        return handler->OnDataReceived(std::forward<std::unique_ptr<folly::IOBuf>>(message_data));
      },
      [](nebula::TcpServiceBase* service, nebula::MTProtoPipeline* pipeline) -> int {
        auto h = pipeline->getHandler<MTProtoHandler>();
        DCHECK(h);

        auto handler = h->CastByGetAttachData<FrontendServerHandler>();

        if (!handler) {
          LOG(ERROR) << "OnConnectionClosed - CastByGetAttachData";
          return -1;
        }

        return handler->OnConnectionClosed();
      });
}

int FrontendServerHandler::OnNewConnection() {
  LOG(INFO) << "frontend connected.";
  return 0;
}

int FrontendServerHandler::OnDataReceived(std::unique_ptr<folly::IOBuf> message_data) {
  LOG(INFO) << "recv data:";

  std::string router_name;

  folly::io::Cursor c(message_data.get());
  auto auth_key_id = c.readLE<uint64_t>();
  if (auth_key_id == 0) {
    // TODO(@benqi): check packet len.
    router_name = "auth_key_server";
  } else {
    router_name = "session_server";
  }

  auto mtproto_data = std::make_shared<zproto::Push>(std::move(message_data));

  mtproto_data->set_timetick(NowInMsecTime());
  mtproto_data->set_log_id(1);
  mtproto_data->set_trace_id(GetNextIDBySnowflake());
  mtproto_data->set_span_id(GetNextIDBySnowflake());
  mtproto_data->set_parent_span_id(mtproto_data->span_id());
  mtproto_data->set_from(service_->GetServiceName());
  mtproto_data->push_back_option(GetServerID());
  mtproto_data->push_back_option(conn_id_);

  zproto::WritePackage(router_name, mtproto_data);
  return 0;
}

int FrontendServerHandler::OnConnectionClosed() {
  LOG(INFO) << "frontend disconnect.";
  return 0;
}

int FrontendServerHandler::OnBackendDataArrived(zproto::PushPtr message_data) {
  if (pipeline_ == nullptr) {
    return 0;
  }

  pipeline_->write(std::move(message_data->body));
  return 0;
}
