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

#ifndef FRONTEND_BACKEND_CLIENT_HANDLER_H_
#define FRONTEND_BACKEND_CLIENT_HANDLER_H_

#include "nebula/net/handler/zproto/zproto_handler.h"


class BackendClientHandler : public nebula::ConnAttachData {
public:
  BackendClientHandler(nebula::TcpServiceBase* service, nebula::ZProtoPipeline* pipeline, uint64_t conn_id)
    : service_(service),
      pipeline_(pipeline),
      conn_id_(conn_id) {}

  static void Initialize_ZProtoEvent();

protected:
  ///////////////////////////////////////////////////////////////////////////////////////
  int OnNewConnection();
  int OnDataReceived(zproto::PackageMessagePtr message_data);
  int OnConnectionClosed();

private:
  nebula::TcpServiceBase* service_ {nullptr};
  nebula::ZProtoPipeline* pipeline_ {nullptr};
  uint64_t conn_id_ {0};
};


#endif //FRONTEND_BACKEND_CLIENT_HANDLER_H_
