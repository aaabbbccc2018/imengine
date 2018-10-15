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

#ifndef FRONTEND_FRONTEND_SERVER_HANDLER_H_
#define FRONTEND_FRONTEND_SERVER_HANDLER_H_

#include <folly/io/async/EventBase.h>

#include "nebula/net/zproto/zproto_package_data.h"
#include "nebula/net/handler/nebula_base_handler.h"
#include "nebula/net/handler/mtproto/mtproto_handler.h"

class FrontendServerHandler : public nebula::ConnAttachData {
public:
  FrontendServerHandler(nebula::TcpServiceBase* service, nebula::MTProtoPipeline* pipeline, uint64_t conn_id)
    : service_(service),
      pipeline_(pipeline),
      conn_id_(conn_id) {}

  static void Initialize_MTProtoEvent();

  int OnBackendDataArrived(zproto::PushPtr message_data);

protected:
  ///////////////////////////////////////////////////////////////////////////////////////
  int OnNewConnection();
  int OnDataReceived(std::unique_ptr<folly::IOBuf> message_data);
  int OnConnectionClosed();

private:
  nebula::TcpServiceBase* service_ {nullptr};
  nebula::MTProtoPipeline* pipeline_ {nullptr};
  uint64_t conn_id_ {0};
};


#endif //FRONTEND_FRONTEND_SERVER_HANDLER_H_
