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

#ifndef	MESSENGER_ZRPC_USERS_SERVICE_H_
#define	MESSENGER_ZRPC_USERS_SERVICE_H_

#include "base/base_zrpc_service.h"
#include "proto/mtproto/core/mtproto_schema.h"

class ZRpcUsersService : public BaseZRpcService {
public:
  virtual ~ZRpcUsersService() = default;

  // users.getFullUser#ca30a5b1 id:InputUser = UserFull;
  virtual int users_getFullUser(const mtproto::TL_users_getFullUser& request, std::shared_ptr<mtproto::UserFull>& response);
  
  // users.getUsers#d91a548 id:Vector<InputUser> = Vector<User>;
  virtual int users_getUsers(const mtproto::TL_users_getUsers& request, std::shared_ptr<mtproto::TLObjectVector<mtproto::User>>& response);
};

#endif

