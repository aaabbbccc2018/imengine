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

#include "frontend/frontend_server.h"

#include "nebula/base/id_util.h"

#include "frontend/frontend_server_handler.h"
#include "frontend/backend_client_handler.h"

static uint32_t g_server_id = 1;

uint32_t GetServerID() {
  return g_server_id;
}

bool FrontendServer::Initialize() {
  InitSnowflakeWorkerID(1, g_server_id);

	// Init event
	FrontendServerHandler::Initialize_MTProtoEvent();
	BackendClientHandler::Initialize_ZProtoEvent();

	// 注册服务
	// 客户端连接服务
	RegisterService("frontend_server", "tcp_server", "mtproto");
	RegisterService("auth_key_client", "tcp_client", "zproto");
	RegisterService("session_client", "tcp_client", "zproto");

	return BaseServer::Initialize();
}

bool FrontendServer::Run() {
	BaseServer::Run();
	MTProtoEventCallback::Destroy();
	return true;
}

/////////////////////////////////////////////////////////////////////////////////////////
int main(int argc, char* argv[]) {
	return nebula::DoMain<FrontendServer>(argc, argv);
}
