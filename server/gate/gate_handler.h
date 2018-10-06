/*
 *  Copyright (c) 2016, https://github.com/zhatalk
 *  All rights reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef	GATE_GATE_HANDLER_H_
#define	GATE_GATE_HANDLER_H_

#include <folly/io/async/EventBase.h>
#include "nebula/net/handler/nebula_base_handler.h"
#include "nebula/net/handler/zproto/zproto_handler.h"

// 转发器，通过ConnData绑定handler
// 并转发给具体的handler进行处理
struct gate {
  ///////////////////////////////////////////////////////////////////////////////////////
  static int OnNewConnection(nebula::TcpServiceBase* service, nebula::ZProtoPipeline* pipeline);
  static int OnDataReceived(nebula::ZProtoPipeline* pipeline, std::shared_ptr<PackageMessage> message_data);
  static int OnConnectionClosed(nebula::TcpServiceBase* service, nebula::ZProtoPipeline* pipeline);
};

#endif // GATE_GATE_HANDLER_H_

