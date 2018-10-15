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

// #include <mtproto/schema.tl.h>
#include "auth_key/auth_key_service_impl.h"

void AuthKeyServiceImpl::ProcessNsheadRequest(const brpc::Server&,
                          brpc::Controller* cntl,
                          const brpc::NsheadMessage& request,
                          brpc::NsheadMessage* response,
                          brpc::NsheadClosure* done) {
  // This object helps you to call done->Run() in RAII style. If you need
  // to process the request asynchronously, pass done_guard.release().
  brpc::ClosureGuard done_guard(done);

  if (cntl->Failed()) {
    // NOTE: You can send back a response containing error information
    // back to client instead of closing the connection.
    cntl->CloseConnection("Close connection due to previous error");
    return;
  }

  // struct A {
  //   uint64_t auth_key_id;
  //   uint64_t message_id;
  //   uint32_t bytes;
  //   uint32_t class_id;
  //   char*    body;
  //   // auth_key_id;
  // };
  // char h[24];
  // A* a = (A*)h;
  //
  // // check
  // if (a->auth_key_id != 0) {
  //   //
  // };
  //
  // if (a->bytes + 16 != request.body.length()) {
  //   //
  // }
  //
  // switch (a->class_id) {
  //   case mtproto::TL_req_pq::CLASS_ID:
  //     break;
  //   case mtproto::TL_req_pq_multi::CLASS_ID:
  //     break;
  //   case mtproto::TL_req_DH_params::CLASS_ID:
  //     break;
  //   case mtproto::TL_set_client_DH_params::CLASS_ID:
  //     break;
  //   case mtproto::TL_msgs_ack::CLASS_ID:
  //     break;
  //   default:
  //     break;
  // }
  // request.body.cutn(h, 24);


  // var (
  //     state = hmsg.State
  // err   error
  // res   mtproto.TLObject
  // )
  //
  // mtpMessage := &mtproto.UnencryptedMessage{}
  // err = mtpMessage.Decode(hmsg.MTPRawData[8:])
  // if err != nil {
  //       glog.Error(err)
  //       return nil, err
  //   }
  //
  // switch mtpMessage.Object.(type) {
  //   case *mtproto.TLReqPq:
  //     res, err = s.onReqPq(state, mtpMessage.Object.(*mtproto.TLReqPq))
  //   state.State = zproto.STATE_pq_res
  //   case *mtproto.TLReqPqMulti:
  //     res, err = s.onReqPqMulti(state, mtpMessage.Object.(*mtproto.TLReqPqMulti))
  //   state.State = zproto.STATE_pq_res
  //   case *mtproto.TLReq_DHParams:
  //     res, err = s.onReq_DHParams(hmsg.State, mtpMessage.Object.(*mtproto.TLReq_DHParams))
  //   state.State = zproto.STATE_DH_params_res
  //   case *mtproto.TLSetClient_DHParams:
  //     res, err = s.onSetClient_DHParams(hmsg.State, mtpMessage.Object.(*mtproto.TLSetClient_DHParams))
  //   state.State = zproto.STATE_dh_gen_res
  //   case *mtproto.TLMsgsAck:
  //     // func (s *handshake) onMsgsAck(state *mtproto.HandshakeState, request *mtproto.TLMsgsAck) error {
  //     err = s.onMsgsAck(hmsg.State, mtpMessage.Object.(*mtproto.TLMsgsAck))
  //   return nil, err
  //   default:
  //     err = fmt.Errorf("invalid handshake type: %v", hmsg)
  //   return nil, err
  // }
  //
  // if err != nil {
  //       state.ResState = zproto.RES_STATE_ERROR
  //   } else {
  //   state.ResState = zproto.RES_STATE_OK
  // }
  //
  // mtpMessage2 := &mtproto.UnencryptedMessage{
  //   MessageId: mtproto.GenerateMessageId(),
  //     Object:    res,
  // }
  //
  // zmsg := &zproto.ZProtoHandshakeMessage{
  //   SessionId:  hmsg.SessionId,
  //     State:      state,
  //       MTPRawData: mtpMessage2.Encode(),
  // }
  // return zmsg, nil


  *response = request; // Just echo the request to client
}
