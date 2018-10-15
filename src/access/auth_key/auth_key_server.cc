// Copyright (c) 2018, https://github.com/nebulaim
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

// #include "auth_key/auth_key_server.h"
//
// // #include "nebula/base/id_util.h"
//
// #include "auth_key/auth_key_handler.h"
//
// bool AuthKeyServer::Initialize() {
//   AuthKeyHandler::Initialize_ZProtoEvent();
//
//   // 注册服务
//   RegisterService("auth_key_server", "tcp_server", "zproto");
//
//   return BaseServer::Initialize();
// }
//
// bool AuthKeyServer::Run() {
//   BaseServer::Run();
//   ZProtoEventCallback::Destroy();
//   return true;
// }
//
// /////////////////////////////////////////////////////////////////////////////////////////
// int main(int argc, char* argv[]) {
//   return nebula::DoMain<AuthKeyServer>(argc, argv);
// }

#include <gflags/gflags.h>
#include <butil/logging.h>
#include <brpc/server.h>

#include "auth_key/auth_key_service_impl.h"

DEFINE_int32(port, 8010, "TCP Port of this server");
DEFINE_int32(idle_timeout_s, -1, "Connection will be closed if there is no "
                                 "read/write operations during the last `idle_timeout_s'");
DEFINE_int32(max_concurrency, 0, "Limit of request processing in parallel");

int main(int argc, char* argv[]) {
  // Parse gflags. We recommend you to use gflags as well.
  GFLAGS_NS::ParseCommandLineFlags(&argc, &argv, true);

  brpc::Server server;
  brpc::ServerOptions options;
  options.nshead_service = new AuthKeyServiceImpl;
  options.idle_timeout_sec = FLAGS_idle_timeout_s;
  options.max_concurrency = FLAGS_max_concurrency;

  // Start the server.
  if (server.Start(FLAGS_port, &options) != 0) {
    LOG(ERROR) << "Fail to start EchoServer";
    return -1;
  }

  // Wait until Ctrl-C is pressed, then Stop() and Join() the server.
  server.RunUntilAskedToQuit();
  return 0;
}
