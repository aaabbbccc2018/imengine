// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: schema.tl.transport_service.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "schema.tl.transport_service.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace mtproto {
class TL_rpc_drop_answerDefaultTypeInternal {
public:
 ::google::protobuf::internal::ExplicitlyConstructed<TL_rpc_drop_answer>
     _instance;
} _TL_rpc_drop_answer_default_instance_;
class TL_get_future_saltsDefaultTypeInternal {
public:
 ::google::protobuf::internal::ExplicitlyConstructed<TL_get_future_salts>
     _instance;
} _TL_get_future_salts_default_instance_;
class TL_pingDefaultTypeInternal {
public:
 ::google::protobuf::internal::ExplicitlyConstructed<TL_ping>
     _instance;
} _TL_ping_default_instance_;
class TL_ping_delay_disconnectDefaultTypeInternal {
public:
 ::google::protobuf::internal::ExplicitlyConstructed<TL_ping_delay_disconnect>
     _instance;
} _TL_ping_delay_disconnect_default_instance_;
class TL_destroy_sessionDefaultTypeInternal {
public:
 ::google::protobuf::internal::ExplicitlyConstructed<TL_destroy_session>
     _instance;
} _TL_destroy_session_default_instance_;
class TL_contest_saveDeveloperInfoDefaultTypeInternal {
public:
 ::google::protobuf::internal::ExplicitlyConstructed<TL_contest_saveDeveloperInfo>
     _instance;
} _TL_contest_saveDeveloperInfo_default_instance_;

namespace protobuf_schema_2etl_2etransport_5fservice_2eproto {


namespace {

::google::protobuf::Metadata file_level_metadata[6];

}  // namespace

PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::ParseTableField
    const TableStruct::entries[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  {0, 0, 0, ::google::protobuf::internal::kInvalidMask, 0, 0},
};

PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::AuxillaryParseTableField
    const TableStruct::aux[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ::google::protobuf::internal::AuxillaryParseTableField(),
};
PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::ParseTable const
    TableStruct::schema[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { NULL, NULL, 0, -1, -1, -1, -1, NULL, false },
  { NULL, NULL, 0, -1, -1, -1, -1, NULL, false },
  { NULL, NULL, 0, -1, -1, -1, -1, NULL, false },
  { NULL, NULL, 0, -1, -1, -1, -1, NULL, false },
  { NULL, NULL, 0, -1, -1, -1, -1, NULL, false },
  { NULL, NULL, 0, -1, -1, -1, -1, NULL, false },
};

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TL_rpc_drop_answer, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TL_rpc_drop_answer, req_msg_id_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TL_get_future_salts, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TL_get_future_salts, num_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TL_ping, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TL_ping, ping_id_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TL_ping_delay_disconnect, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TL_ping_delay_disconnect, ping_id_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TL_ping_delay_disconnect, disconnect_delay_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TL_destroy_session, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TL_destroy_session, session_id_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TL_contest_saveDeveloperInfo, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TL_contest_saveDeveloperInfo, vk_id_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TL_contest_saveDeveloperInfo, name_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TL_contest_saveDeveloperInfo, phone_number_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TL_contest_saveDeveloperInfo, age_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TL_contest_saveDeveloperInfo, city_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(TL_rpc_drop_answer)},
  { 6, -1, sizeof(TL_get_future_salts)},
  { 12, -1, sizeof(TL_ping)},
  { 18, -1, sizeof(TL_ping_delay_disconnect)},
  { 25, -1, sizeof(TL_destroy_session)},
  { 31, -1, sizeof(TL_contest_saveDeveloperInfo)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&_TL_rpc_drop_answer_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&_TL_get_future_salts_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&_TL_ping_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&_TL_ping_delay_disconnect_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&_TL_destroy_session_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&_TL_contest_saveDeveloperInfo_default_instance_),
};

namespace {

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "schema.tl.transport_service.proto", schemas, file_default_instances, TableStruct::offsets, factory,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 6);
}

}  // namespace
void TableStruct::InitDefaultsImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::InitProtobufDefaults();
  _TL_rpc_drop_answer_default_instance_._instance.DefaultConstruct();
  ::google::protobuf::internal::OnShutdownDestroyMessage(
      &_TL_rpc_drop_answer_default_instance_);_TL_get_future_salts_default_instance_._instance.DefaultConstruct();
  ::google::protobuf::internal::OnShutdownDestroyMessage(
      &_TL_get_future_salts_default_instance_);_TL_ping_default_instance_._instance.DefaultConstruct();
  ::google::protobuf::internal::OnShutdownDestroyMessage(
      &_TL_ping_default_instance_);_TL_ping_delay_disconnect_default_instance_._instance.DefaultConstruct();
  ::google::protobuf::internal::OnShutdownDestroyMessage(
      &_TL_ping_delay_disconnect_default_instance_);_TL_destroy_session_default_instance_._instance.DefaultConstruct();
  ::google::protobuf::internal::OnShutdownDestroyMessage(
      &_TL_destroy_session_default_instance_);_TL_contest_saveDeveloperInfo_default_instance_._instance.DefaultConstruct();
  ::google::protobuf::internal::OnShutdownDestroyMessage(
      &_TL_contest_saveDeveloperInfo_default_instance_);}

void InitDefaults() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &TableStruct::InitDefaultsImpl);
}
namespace {
void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n!schema.tl.transport_service.proto\022\007mtp"
      "roto\"(\n\022TL_rpc_drop_answer\022\022\n\nreq_msg_id"
      "\030\001 \001(\003\"\"\n\023TL_get_future_salts\022\013\n\003num\030\001 \001"
      "(\005\"\032\n\007TL_ping\022\017\n\007ping_id\030\001 \001(\003\"E\n\030TL_pin"
      "g_delay_disconnect\022\017\n\007ping_id\030\001 \001(\003\022\030\n\020d"
      "isconnect_delay\030\002 \001(\005\"(\n\022TL_destroy_sess"
      "ion\022\022\n\nsession_id\030\001 \001(\003\"l\n\034TL_contest_sa"
      "veDeveloperInfo\022\r\n\005vk_id\030\001 \001(\005\022\014\n\004name\030\002"
      " \001(\t\022\024\n\014phone_number\030\003 \001(\t\022\013\n\003age\030\004 \001(\005\022"
      "\014\n\004city\030\005 \001(\tB(\n\033com.nebulaim.engine.mtp"
      "rotoB\007MTProtoH\002b\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 423);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "schema.tl.transport_service.proto", &protobuf_RegisterTypes);
}
} // anonymous namespace

void AddDescriptors() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at dynamic initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;

}  // namespace protobuf_schema_2etl_2etransport_5fservice_2eproto


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int TL_rpc_drop_answer::kReqMsgIdFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

TL_rpc_drop_answer::TL_rpc_drop_answer()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_schema_2etl_2etransport_5fservice_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:mtproto.TL_rpc_drop_answer)
}
TL_rpc_drop_answer::TL_rpc_drop_answer(const TL_rpc_drop_answer& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  req_msg_id_ = from.req_msg_id_;
  // @@protoc_insertion_point(copy_constructor:mtproto.TL_rpc_drop_answer)
}

void TL_rpc_drop_answer::SharedCtor() {
  req_msg_id_ = GOOGLE_LONGLONG(0);
  _cached_size_ = 0;
}

TL_rpc_drop_answer::~TL_rpc_drop_answer() {
  // @@protoc_insertion_point(destructor:mtproto.TL_rpc_drop_answer)
  SharedDtor();
}

void TL_rpc_drop_answer::SharedDtor() {
}

void TL_rpc_drop_answer::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* TL_rpc_drop_answer::descriptor() {
  protobuf_schema_2etl_2etransport_5fservice_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_schema_2etl_2etransport_5fservice_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const TL_rpc_drop_answer& TL_rpc_drop_answer::default_instance() {
  protobuf_schema_2etl_2etransport_5fservice_2eproto::InitDefaults();
  return *internal_default_instance();
}

TL_rpc_drop_answer* TL_rpc_drop_answer::New(::google::protobuf::Arena* arena) const {
  TL_rpc_drop_answer* n = new TL_rpc_drop_answer;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void TL_rpc_drop_answer::Swap(TL_rpc_drop_answer* other) {
  if (other == this) return;
  InternalSwap(other);
}
void TL_rpc_drop_answer::InternalSwap(TL_rpc_drop_answer* other) {
  using std::swap;
  GetReflection()->Swap(this, other);}

::google::protobuf::Metadata TL_rpc_drop_answer::GetMetadata() const {
  protobuf_schema_2etl_2etransport_5fservice_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_schema_2etl_2etransport_5fservice_2eproto::file_level_metadata[kIndexInFileMessages];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// TL_rpc_drop_answer

// int64 req_msg_id = 1;
void TL_rpc_drop_answer::clear_req_msg_id() {
  req_msg_id_ = GOOGLE_LONGLONG(0);
}
::google::protobuf::int64 TL_rpc_drop_answer::req_msg_id() const {
  // @@protoc_insertion_point(field_get:mtproto.TL_rpc_drop_answer.req_msg_id)
  return req_msg_id_;
}
void TL_rpc_drop_answer::set_req_msg_id(::google::protobuf::int64 value) {
  
  req_msg_id_ = value;
  // @@protoc_insertion_point(field_set:mtproto.TL_rpc_drop_answer.req_msg_id)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int TL_get_future_salts::kNumFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

TL_get_future_salts::TL_get_future_salts()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_schema_2etl_2etransport_5fservice_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:mtproto.TL_get_future_salts)
}
TL_get_future_salts::TL_get_future_salts(const TL_get_future_salts& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  num_ = from.num_;
  // @@protoc_insertion_point(copy_constructor:mtproto.TL_get_future_salts)
}

void TL_get_future_salts::SharedCtor() {
  num_ = 0;
  _cached_size_ = 0;
}

TL_get_future_salts::~TL_get_future_salts() {
  // @@protoc_insertion_point(destructor:mtproto.TL_get_future_salts)
  SharedDtor();
}

void TL_get_future_salts::SharedDtor() {
}

void TL_get_future_salts::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* TL_get_future_salts::descriptor() {
  protobuf_schema_2etl_2etransport_5fservice_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_schema_2etl_2etransport_5fservice_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const TL_get_future_salts& TL_get_future_salts::default_instance() {
  protobuf_schema_2etl_2etransport_5fservice_2eproto::InitDefaults();
  return *internal_default_instance();
}

TL_get_future_salts* TL_get_future_salts::New(::google::protobuf::Arena* arena) const {
  TL_get_future_salts* n = new TL_get_future_salts;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void TL_get_future_salts::Swap(TL_get_future_salts* other) {
  if (other == this) return;
  InternalSwap(other);
}
void TL_get_future_salts::InternalSwap(TL_get_future_salts* other) {
  using std::swap;
  GetReflection()->Swap(this, other);}

::google::protobuf::Metadata TL_get_future_salts::GetMetadata() const {
  protobuf_schema_2etl_2etransport_5fservice_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_schema_2etl_2etransport_5fservice_2eproto::file_level_metadata[kIndexInFileMessages];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// TL_get_future_salts

// int32 num = 1;
void TL_get_future_salts::clear_num() {
  num_ = 0;
}
::google::protobuf::int32 TL_get_future_salts::num() const {
  // @@protoc_insertion_point(field_get:mtproto.TL_get_future_salts.num)
  return num_;
}
void TL_get_future_salts::set_num(::google::protobuf::int32 value) {
  
  num_ = value;
  // @@protoc_insertion_point(field_set:mtproto.TL_get_future_salts.num)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int TL_ping::kPingIdFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

TL_ping::TL_ping()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_schema_2etl_2etransport_5fservice_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:mtproto.TL_ping)
}
TL_ping::TL_ping(const TL_ping& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ping_id_ = from.ping_id_;
  // @@protoc_insertion_point(copy_constructor:mtproto.TL_ping)
}

void TL_ping::SharedCtor() {
  ping_id_ = GOOGLE_LONGLONG(0);
  _cached_size_ = 0;
}

TL_ping::~TL_ping() {
  // @@protoc_insertion_point(destructor:mtproto.TL_ping)
  SharedDtor();
}

void TL_ping::SharedDtor() {
}

void TL_ping::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* TL_ping::descriptor() {
  protobuf_schema_2etl_2etransport_5fservice_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_schema_2etl_2etransport_5fservice_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const TL_ping& TL_ping::default_instance() {
  protobuf_schema_2etl_2etransport_5fservice_2eproto::InitDefaults();
  return *internal_default_instance();
}

TL_ping* TL_ping::New(::google::protobuf::Arena* arena) const {
  TL_ping* n = new TL_ping;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void TL_ping::Swap(TL_ping* other) {
  if (other == this) return;
  InternalSwap(other);
}
void TL_ping::InternalSwap(TL_ping* other) {
  using std::swap;
  GetReflection()->Swap(this, other);}

::google::protobuf::Metadata TL_ping::GetMetadata() const {
  protobuf_schema_2etl_2etransport_5fservice_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_schema_2etl_2etransport_5fservice_2eproto::file_level_metadata[kIndexInFileMessages];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// TL_ping

// int64 ping_id = 1;
void TL_ping::clear_ping_id() {
  ping_id_ = GOOGLE_LONGLONG(0);
}
::google::protobuf::int64 TL_ping::ping_id() const {
  // @@protoc_insertion_point(field_get:mtproto.TL_ping.ping_id)
  return ping_id_;
}
void TL_ping::set_ping_id(::google::protobuf::int64 value) {
  
  ping_id_ = value;
  // @@protoc_insertion_point(field_set:mtproto.TL_ping.ping_id)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int TL_ping_delay_disconnect::kPingIdFieldNumber;
const int TL_ping_delay_disconnect::kDisconnectDelayFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

TL_ping_delay_disconnect::TL_ping_delay_disconnect()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_schema_2etl_2etransport_5fservice_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:mtproto.TL_ping_delay_disconnect)
}
TL_ping_delay_disconnect::TL_ping_delay_disconnect(const TL_ping_delay_disconnect& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::memcpy(&ping_id_, &from.ping_id_,
    static_cast<size_t>(reinterpret_cast<char*>(&disconnect_delay_) -
    reinterpret_cast<char*>(&ping_id_)) + sizeof(disconnect_delay_));
  // @@protoc_insertion_point(copy_constructor:mtproto.TL_ping_delay_disconnect)
}

void TL_ping_delay_disconnect::SharedCtor() {
  ::memset(&ping_id_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&disconnect_delay_) -
      reinterpret_cast<char*>(&ping_id_)) + sizeof(disconnect_delay_));
  _cached_size_ = 0;
}

TL_ping_delay_disconnect::~TL_ping_delay_disconnect() {
  // @@protoc_insertion_point(destructor:mtproto.TL_ping_delay_disconnect)
  SharedDtor();
}

void TL_ping_delay_disconnect::SharedDtor() {
}

void TL_ping_delay_disconnect::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* TL_ping_delay_disconnect::descriptor() {
  protobuf_schema_2etl_2etransport_5fservice_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_schema_2etl_2etransport_5fservice_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const TL_ping_delay_disconnect& TL_ping_delay_disconnect::default_instance() {
  protobuf_schema_2etl_2etransport_5fservice_2eproto::InitDefaults();
  return *internal_default_instance();
}

TL_ping_delay_disconnect* TL_ping_delay_disconnect::New(::google::protobuf::Arena* arena) const {
  TL_ping_delay_disconnect* n = new TL_ping_delay_disconnect;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void TL_ping_delay_disconnect::Swap(TL_ping_delay_disconnect* other) {
  if (other == this) return;
  InternalSwap(other);
}
void TL_ping_delay_disconnect::InternalSwap(TL_ping_delay_disconnect* other) {
  using std::swap;
  GetReflection()->Swap(this, other);}

::google::protobuf::Metadata TL_ping_delay_disconnect::GetMetadata() const {
  protobuf_schema_2etl_2etransport_5fservice_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_schema_2etl_2etransport_5fservice_2eproto::file_level_metadata[kIndexInFileMessages];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// TL_ping_delay_disconnect

// int64 ping_id = 1;
void TL_ping_delay_disconnect::clear_ping_id() {
  ping_id_ = GOOGLE_LONGLONG(0);
}
::google::protobuf::int64 TL_ping_delay_disconnect::ping_id() const {
  // @@protoc_insertion_point(field_get:mtproto.TL_ping_delay_disconnect.ping_id)
  return ping_id_;
}
void TL_ping_delay_disconnect::set_ping_id(::google::protobuf::int64 value) {
  
  ping_id_ = value;
  // @@protoc_insertion_point(field_set:mtproto.TL_ping_delay_disconnect.ping_id)
}

// int32 disconnect_delay = 2;
void TL_ping_delay_disconnect::clear_disconnect_delay() {
  disconnect_delay_ = 0;
}
::google::protobuf::int32 TL_ping_delay_disconnect::disconnect_delay() const {
  // @@protoc_insertion_point(field_get:mtproto.TL_ping_delay_disconnect.disconnect_delay)
  return disconnect_delay_;
}
void TL_ping_delay_disconnect::set_disconnect_delay(::google::protobuf::int32 value) {
  
  disconnect_delay_ = value;
  // @@protoc_insertion_point(field_set:mtproto.TL_ping_delay_disconnect.disconnect_delay)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int TL_destroy_session::kSessionIdFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

TL_destroy_session::TL_destroy_session()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_schema_2etl_2etransport_5fservice_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:mtproto.TL_destroy_session)
}
TL_destroy_session::TL_destroy_session(const TL_destroy_session& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  session_id_ = from.session_id_;
  // @@protoc_insertion_point(copy_constructor:mtproto.TL_destroy_session)
}

void TL_destroy_session::SharedCtor() {
  session_id_ = GOOGLE_LONGLONG(0);
  _cached_size_ = 0;
}

TL_destroy_session::~TL_destroy_session() {
  // @@protoc_insertion_point(destructor:mtproto.TL_destroy_session)
  SharedDtor();
}

void TL_destroy_session::SharedDtor() {
}

void TL_destroy_session::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* TL_destroy_session::descriptor() {
  protobuf_schema_2etl_2etransport_5fservice_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_schema_2etl_2etransport_5fservice_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const TL_destroy_session& TL_destroy_session::default_instance() {
  protobuf_schema_2etl_2etransport_5fservice_2eproto::InitDefaults();
  return *internal_default_instance();
}

TL_destroy_session* TL_destroy_session::New(::google::protobuf::Arena* arena) const {
  TL_destroy_session* n = new TL_destroy_session;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void TL_destroy_session::Swap(TL_destroy_session* other) {
  if (other == this) return;
  InternalSwap(other);
}
void TL_destroy_session::InternalSwap(TL_destroy_session* other) {
  using std::swap;
  GetReflection()->Swap(this, other);}

::google::protobuf::Metadata TL_destroy_session::GetMetadata() const {
  protobuf_schema_2etl_2etransport_5fservice_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_schema_2etl_2etransport_5fservice_2eproto::file_level_metadata[kIndexInFileMessages];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// TL_destroy_session

// int64 session_id = 1;
void TL_destroy_session::clear_session_id() {
  session_id_ = GOOGLE_LONGLONG(0);
}
::google::protobuf::int64 TL_destroy_session::session_id() const {
  // @@protoc_insertion_point(field_get:mtproto.TL_destroy_session.session_id)
  return session_id_;
}
void TL_destroy_session::set_session_id(::google::protobuf::int64 value) {
  
  session_id_ = value;
  // @@protoc_insertion_point(field_set:mtproto.TL_destroy_session.session_id)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int TL_contest_saveDeveloperInfo::kVkIdFieldNumber;
const int TL_contest_saveDeveloperInfo::kNameFieldNumber;
const int TL_contest_saveDeveloperInfo::kPhoneNumberFieldNumber;
const int TL_contest_saveDeveloperInfo::kAgeFieldNumber;
const int TL_contest_saveDeveloperInfo::kCityFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

TL_contest_saveDeveloperInfo::TL_contest_saveDeveloperInfo()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_schema_2etl_2etransport_5fservice_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:mtproto.TL_contest_saveDeveloperInfo)
}
TL_contest_saveDeveloperInfo::TL_contest_saveDeveloperInfo(const TL_contest_saveDeveloperInfo& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.name().size() > 0) {
    name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.name_);
  }
  phone_number_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.phone_number().size() > 0) {
    phone_number_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.phone_number_);
  }
  city_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.city().size() > 0) {
    city_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.city_);
  }
  ::memcpy(&vk_id_, &from.vk_id_,
    static_cast<size_t>(reinterpret_cast<char*>(&age_) -
    reinterpret_cast<char*>(&vk_id_)) + sizeof(age_));
  // @@protoc_insertion_point(copy_constructor:mtproto.TL_contest_saveDeveloperInfo)
}

void TL_contest_saveDeveloperInfo::SharedCtor() {
  name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  phone_number_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  city_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&vk_id_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&age_) -
      reinterpret_cast<char*>(&vk_id_)) + sizeof(age_));
  _cached_size_ = 0;
}

TL_contest_saveDeveloperInfo::~TL_contest_saveDeveloperInfo() {
  // @@protoc_insertion_point(destructor:mtproto.TL_contest_saveDeveloperInfo)
  SharedDtor();
}

void TL_contest_saveDeveloperInfo::SharedDtor() {
  name_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  phone_number_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  city_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void TL_contest_saveDeveloperInfo::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* TL_contest_saveDeveloperInfo::descriptor() {
  protobuf_schema_2etl_2etransport_5fservice_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_schema_2etl_2etransport_5fservice_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const TL_contest_saveDeveloperInfo& TL_contest_saveDeveloperInfo::default_instance() {
  protobuf_schema_2etl_2etransport_5fservice_2eproto::InitDefaults();
  return *internal_default_instance();
}

TL_contest_saveDeveloperInfo* TL_contest_saveDeveloperInfo::New(::google::protobuf::Arena* arena) const {
  TL_contest_saveDeveloperInfo* n = new TL_contest_saveDeveloperInfo;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void TL_contest_saveDeveloperInfo::Swap(TL_contest_saveDeveloperInfo* other) {
  if (other == this) return;
  InternalSwap(other);
}
void TL_contest_saveDeveloperInfo::InternalSwap(TL_contest_saveDeveloperInfo* other) {
  using std::swap;
  GetReflection()->Swap(this, other);}

::google::protobuf::Metadata TL_contest_saveDeveloperInfo::GetMetadata() const {
  protobuf_schema_2etl_2etransport_5fservice_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_schema_2etl_2etransport_5fservice_2eproto::file_level_metadata[kIndexInFileMessages];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// TL_contest_saveDeveloperInfo

// int32 vk_id = 1;
void TL_contest_saveDeveloperInfo::clear_vk_id() {
  vk_id_ = 0;
}
::google::protobuf::int32 TL_contest_saveDeveloperInfo::vk_id() const {
  // @@protoc_insertion_point(field_get:mtproto.TL_contest_saveDeveloperInfo.vk_id)
  return vk_id_;
}
void TL_contest_saveDeveloperInfo::set_vk_id(::google::protobuf::int32 value) {
  
  vk_id_ = value;
  // @@protoc_insertion_point(field_set:mtproto.TL_contest_saveDeveloperInfo.vk_id)
}

// string name = 2;
void TL_contest_saveDeveloperInfo::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& TL_contest_saveDeveloperInfo::name() const {
  // @@protoc_insertion_point(field_get:mtproto.TL_contest_saveDeveloperInfo.name)
  return name_.GetNoArena();
}
void TL_contest_saveDeveloperInfo::set_name(const ::std::string& value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:mtproto.TL_contest_saveDeveloperInfo.name)
}
#if LANG_CXX11
void TL_contest_saveDeveloperInfo::set_name(::std::string&& value) {
  
  name_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:mtproto.TL_contest_saveDeveloperInfo.name)
}
#endif
void TL_contest_saveDeveloperInfo::set_name(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:mtproto.TL_contest_saveDeveloperInfo.name)
}
void TL_contest_saveDeveloperInfo::set_name(const char* value, size_t size) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:mtproto.TL_contest_saveDeveloperInfo.name)
}
::std::string* TL_contest_saveDeveloperInfo::mutable_name() {
  
  // @@protoc_insertion_point(field_mutable:mtproto.TL_contest_saveDeveloperInfo.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* TL_contest_saveDeveloperInfo::release_name() {
  // @@protoc_insertion_point(field_release:mtproto.TL_contest_saveDeveloperInfo.name)
  
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void TL_contest_saveDeveloperInfo::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    
  } else {
    
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:mtproto.TL_contest_saveDeveloperInfo.name)
}

// string phone_number = 3;
void TL_contest_saveDeveloperInfo::clear_phone_number() {
  phone_number_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& TL_contest_saveDeveloperInfo::phone_number() const {
  // @@protoc_insertion_point(field_get:mtproto.TL_contest_saveDeveloperInfo.phone_number)
  return phone_number_.GetNoArena();
}
void TL_contest_saveDeveloperInfo::set_phone_number(const ::std::string& value) {
  
  phone_number_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:mtproto.TL_contest_saveDeveloperInfo.phone_number)
}
#if LANG_CXX11
void TL_contest_saveDeveloperInfo::set_phone_number(::std::string&& value) {
  
  phone_number_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:mtproto.TL_contest_saveDeveloperInfo.phone_number)
}
#endif
void TL_contest_saveDeveloperInfo::set_phone_number(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  phone_number_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:mtproto.TL_contest_saveDeveloperInfo.phone_number)
}
void TL_contest_saveDeveloperInfo::set_phone_number(const char* value, size_t size) {
  
  phone_number_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:mtproto.TL_contest_saveDeveloperInfo.phone_number)
}
::std::string* TL_contest_saveDeveloperInfo::mutable_phone_number() {
  
  // @@protoc_insertion_point(field_mutable:mtproto.TL_contest_saveDeveloperInfo.phone_number)
  return phone_number_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* TL_contest_saveDeveloperInfo::release_phone_number() {
  // @@protoc_insertion_point(field_release:mtproto.TL_contest_saveDeveloperInfo.phone_number)
  
  return phone_number_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void TL_contest_saveDeveloperInfo::set_allocated_phone_number(::std::string* phone_number) {
  if (phone_number != NULL) {
    
  } else {
    
  }
  phone_number_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), phone_number);
  // @@protoc_insertion_point(field_set_allocated:mtproto.TL_contest_saveDeveloperInfo.phone_number)
}

// int32 age = 4;
void TL_contest_saveDeveloperInfo::clear_age() {
  age_ = 0;
}
::google::protobuf::int32 TL_contest_saveDeveloperInfo::age() const {
  // @@protoc_insertion_point(field_get:mtproto.TL_contest_saveDeveloperInfo.age)
  return age_;
}
void TL_contest_saveDeveloperInfo::set_age(::google::protobuf::int32 value) {
  
  age_ = value;
  // @@protoc_insertion_point(field_set:mtproto.TL_contest_saveDeveloperInfo.age)
}

// string city = 5;
void TL_contest_saveDeveloperInfo::clear_city() {
  city_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& TL_contest_saveDeveloperInfo::city() const {
  // @@protoc_insertion_point(field_get:mtproto.TL_contest_saveDeveloperInfo.city)
  return city_.GetNoArena();
}
void TL_contest_saveDeveloperInfo::set_city(const ::std::string& value) {
  
  city_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:mtproto.TL_contest_saveDeveloperInfo.city)
}
#if LANG_CXX11
void TL_contest_saveDeveloperInfo::set_city(::std::string&& value) {
  
  city_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:mtproto.TL_contest_saveDeveloperInfo.city)
}
#endif
void TL_contest_saveDeveloperInfo::set_city(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  city_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:mtproto.TL_contest_saveDeveloperInfo.city)
}
void TL_contest_saveDeveloperInfo::set_city(const char* value, size_t size) {
  
  city_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:mtproto.TL_contest_saveDeveloperInfo.city)
}
::std::string* TL_contest_saveDeveloperInfo::mutable_city() {
  
  // @@protoc_insertion_point(field_mutable:mtproto.TL_contest_saveDeveloperInfo.city)
  return city_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* TL_contest_saveDeveloperInfo::release_city() {
  // @@protoc_insertion_point(field_release:mtproto.TL_contest_saveDeveloperInfo.city)
  
  return city_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void TL_contest_saveDeveloperInfo::set_allocated_city(::std::string* city) {
  if (city != NULL) {
    
  } else {
    
  }
  city_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), city);
  // @@protoc_insertion_point(field_set_allocated:mtproto.TL_contest_saveDeveloperInfo.city)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace mtproto

// @@protoc_insertion_point(global_scope)