/*
 *  Copyright (c) 2016, https://github.com/nebula-im
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

// TODO(@benqi): 使用zrpc-code-gen代码生成工具自动生成

#include "auth/zrpc_auth_dispatcher.h"

#include "nebula/net/rpc/zrpc_service_util.h"

// #include "proto/zproto/zproto_api_message_types.h"
#include "auth/auth_service_impl.h"


// #include "nebula/net/zproto/api_message_box.h"

static ZRpcAuthDispatcher g_rpc_auth_dispatcher;

ZRpcAuthDispatcher::ZRpcAuthDispatcher() {
  ZRpcUtil::Register("zproto.StartTokenAuthReq", ZRpcAuthDispatcher::StartTokenAuth);
  ZRpcUtil::Register("zproto.StartTestingAuthReq", ZRpcAuthDispatcher::StartTestingAuth);
}

ProtoRpcResponsePtr ZRpcAuthDispatcher::StartTokenAuth(RpcRequestPtr request) {
  CAST_RPC_REQUEST(StartTokenAuthReq, start_token_auth_req);
  zproto::AuthRsp auth_rsp;
  
  AuthServiceImpl service_impl;
  service_impl.StartTokenAuth(start_token_auth_req, &auth_rsp);

  return MakeRpcOK(auth_rsp);
}

ProtoRpcResponsePtr ZRpcAuthDispatcher::StartTestingAuth(RpcRequestPtr request) {
  CAST_RPC_REQUEST(StartTestingAuthReq, start_testing_auth_req);
  zproto::AuthRsp auth_rsp;
  
  AuthServiceImpl service_impl;
  service_impl.StartTestingAuth(start_testing_auth_req, &auth_rsp);
  
  return MakeRpcOK(auth_rsp);
}

