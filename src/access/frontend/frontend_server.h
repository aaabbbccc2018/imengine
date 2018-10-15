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

#ifndef	FRONTEND_FRONTEND_SERVER_H_
#define	FRONTEND_FRONTEND_SERVER_H_

// #include <folly/io/async/EventBase.h>
#include "nebula/net/base_server.h"

class FrontendServer : public nebula::BaseServer {
public:
	FrontendServer() = default;
	~FrontendServer() override = default;

protected:
	// From BaseServer
	bool Initialize() override;
	bool Run() override;
};

#endif //
