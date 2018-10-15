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

#ifndef AUTH_KEY_AUTH_KEY_SERVICE_IMPL_H_
#define AUTH_KEY_AUTH_KEY_SERVICE_IMPL_H_

#include <brpc/nshead_service.h>

// Adapt your own nshead-based protocol to use brpc
class AuthKeyServiceImpl : public brpc::NsheadService {
public:
  AuthKeyServiceImpl() = default;
  ~AuthKeyServiceImpl() = default;

  void ProcessNsheadRequest(const brpc::Server&,
                            brpc::Controller* cntl,
                            const brpc::NsheadMessage& request,
                            brpc::NsheadMessage* response,
                            brpc::NsheadClosure* done) override;
};

#endif //AUTH_KEY_AUTH_KEY_SERVICE_IMPL_H_
