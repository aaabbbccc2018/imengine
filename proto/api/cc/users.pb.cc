// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: users.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "users.pb.h"

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

namespace zproto {

namespace {

const ::google::protobuf::Descriptor* User_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  User_reflection_ = NULL;
const ::google::protobuf::Descriptor* PushUser_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  PushUser_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_users_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_users_2eproto() {
  protobuf_AddDesc_users_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "users.proto");
  GOOGLE_CHECK(file != NULL);
  User_descriptor_ = file->message_type(0);
  static const int User_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(User, uid_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(User, access_hash_),
  };
  User_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      User_descriptor_,
      User::internal_default_instance(),
      User_offsets_,
      -1,
      -1,
      -1,
      sizeof(User),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(User, _internal_metadata_));
  PushUser_descriptor_ = file->message_type(1);
  static const int PushUser_offsets_[4] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PushUser, uid_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PushUser, access_hash_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PushUser, push_name_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PushUser, push_avatar_),
  };
  PushUser_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      PushUser_descriptor_,
      PushUser::internal_default_instance(),
      PushUser_offsets_,
      -1,
      -1,
      -1,
      sizeof(PushUser),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PushUser, _internal_metadata_));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_users_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      User_descriptor_, User::internal_default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      PushUser_descriptor_, PushUser::internal_default_instance());
}

}  // namespace

void protobuf_ShutdownFile_users_2eproto() {
  User_default_instance_.Shutdown();
  delete User_reflection_;
  PushUser_default_instance_.Shutdown();
  delete PushUser_reflection_;
}

void protobuf_InitDefaults_users_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::zproto::protobuf_InitDefaults_types_2eproto();
  ::zproto::protobuf_InitDefaults_files_2eproto();
  ::google::protobuf::internal::GetEmptyString();
  User_default_instance_.DefaultConstruct();
  ::google::protobuf::internal::GetEmptyString();
  PushUser_default_instance_.DefaultConstruct();
  User_default_instance_.get_mutable()->InitAsDefaultInstance();
  PushUser_default_instance_.get_mutable()->InitAsDefaultInstance();
}

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_InitDefaults_users_2eproto_once_);
void protobuf_InitDefaults_users_2eproto() {
  ::google::protobuf::GoogleOnceInit(&protobuf_InitDefaults_users_2eproto_once_,
                 &protobuf_InitDefaults_users_2eproto_impl);
}
void protobuf_AddDesc_users_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  protobuf_InitDefaults_users_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\013users.proto\022\006zproto\032\013types.proto\032\013file"
    "s.proto\"(\n\004User\022\013\n\003uid\030\001 \001(\t\022\023\n\013access_h"
    "ash\030\002 \001(\003\"d\n\010PushUser\022\013\n\003uid\030\001 \001(\t\022\023\n\013ac"
    "cess_hash\030\002 \001(\003\022\021\n\tpush_name\030\003 \001(\t\022#\n\013pu"
    "sh_avatar\030\005 \001(\0132\016.zproto.AvatarB(\n\027com.z"
    "chat.engine.zprotoB\013ZProtoUsersH\002b\006proto"
    "3", 241);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "users.proto", &protobuf_RegisterTypes);
  ::zproto::protobuf_AddDesc_types_2eproto();
  ::zproto::protobuf_AddDesc_files_2eproto();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_users_2eproto);
}

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_users_2eproto_once_);
void protobuf_AddDesc_users_2eproto() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_users_2eproto_once_,
                 &protobuf_AddDesc_users_2eproto_impl);
}
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_users_2eproto {
  StaticDescriptorInitializer_users_2eproto() {
    protobuf_AddDesc_users_2eproto();
  }
} static_descriptor_initializer_users_2eproto_;

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int User::kUidFieldNumber;
const int User::kAccessHashFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

User::User()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (this != internal_default_instance()) protobuf_InitDefaults_users_2eproto();
  SharedCtor();
  // @@protoc_insertion_point(constructor:zproto.User)
}

void User::InitAsDefaultInstance() {
}

User::User(const User& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  UnsafeMergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:zproto.User)
}

void User::SharedCtor() {
  uid_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  access_hash_ = GOOGLE_LONGLONG(0);
  _cached_size_ = 0;
}

User::~User() {
  // @@protoc_insertion_point(destructor:zproto.User)
  SharedDtor();
}

void User::SharedDtor() {
  uid_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void User::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* User::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return User_descriptor_;
}

const User& User::default_instance() {
  protobuf_InitDefaults_users_2eproto();
  return *internal_default_instance();
}

::google::protobuf::internal::ExplicitlyConstructed<User> User_default_instance_;

User* User::New(::google::protobuf::Arena* arena) const {
  User* n = new User;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void User::UnsafeMergeFrom(const User& from) {
  MergeFrom(from);
}
void User::Swap(User* other) {
  if (other == this) return;
  InternalSwap(other);
}
void User::InternalSwap(User* other) {
  GetReflection()->Swap(this, other);}

::google::protobuf::Metadata User::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = User_descriptor_;
  metadata.reflection = User_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// User

// optional string uid = 1;
void User::clear_uid() {
  uid_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& User::uid() const {
  // @@protoc_insertion_point(field_get:zproto.User.uid)
  return uid_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void User::set_uid(const ::std::string& value) {
  
  uid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:zproto.User.uid)
}
void User::set_uid(const char* value) {
  
  uid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:zproto.User.uid)
}
void User::set_uid(const char* value, size_t size) {
  
  uid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:zproto.User.uid)
}
::std::string* User::mutable_uid() {
  
  // @@protoc_insertion_point(field_mutable:zproto.User.uid)
  return uid_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* User::release_uid() {
  // @@protoc_insertion_point(field_release:zproto.User.uid)
  
  return uid_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void User::set_allocated_uid(::std::string* uid) {
  if (uid != NULL) {
    
  } else {
    
  }
  uid_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), uid);
  // @@protoc_insertion_point(field_set_allocated:zproto.User.uid)
}

// optional int64 access_hash = 2;
void User::clear_access_hash() {
  access_hash_ = GOOGLE_LONGLONG(0);
}
::google::protobuf::int64 User::access_hash() const {
  // @@protoc_insertion_point(field_get:zproto.User.access_hash)
  return access_hash_;
}
void User::set_access_hash(::google::protobuf::int64 value) {
  
  access_hash_ = value;
  // @@protoc_insertion_point(field_set:zproto.User.access_hash)
}

inline const User* User::internal_default_instance() {
  return &User_default_instance_.get();
}
#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int PushUser::kUidFieldNumber;
const int PushUser::kAccessHashFieldNumber;
const int PushUser::kPushNameFieldNumber;
const int PushUser::kPushAvatarFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

PushUser::PushUser()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (this != internal_default_instance()) protobuf_InitDefaults_users_2eproto();
  SharedCtor();
  // @@protoc_insertion_point(constructor:zproto.PushUser)
}

void PushUser::InitAsDefaultInstance() {
  push_avatar_ = const_cast< ::zproto::Avatar*>(
      ::zproto::Avatar::internal_default_instance());
}

PushUser::PushUser(const PushUser& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  UnsafeMergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:zproto.PushUser)
}

void PushUser::SharedCtor() {
  uid_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  push_name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  push_avatar_ = NULL;
  access_hash_ = GOOGLE_LONGLONG(0);
  _cached_size_ = 0;
}

PushUser::~PushUser() {
  // @@protoc_insertion_point(destructor:zproto.PushUser)
  SharedDtor();
}

void PushUser::SharedDtor() {
  uid_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  push_name_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != &PushUser_default_instance_.get()) {
    delete push_avatar_;
  }
}

void PushUser::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* PushUser::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return PushUser_descriptor_;
}

const PushUser& PushUser::default_instance() {
  protobuf_InitDefaults_users_2eproto();
  return *internal_default_instance();
}

::google::protobuf::internal::ExplicitlyConstructed<PushUser> PushUser_default_instance_;

PushUser* PushUser::New(::google::protobuf::Arena* arena) const {
  PushUser* n = new PushUser;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void PushUser::UnsafeMergeFrom(const PushUser& from) {
  MergeFrom(from);
}
void PushUser::Swap(PushUser* other) {
  if (other == this) return;
  InternalSwap(other);
}
void PushUser::InternalSwap(PushUser* other) {
  GetReflection()->Swap(this, other);}

::google::protobuf::Metadata PushUser::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = PushUser_descriptor_;
  metadata.reflection = PushUser_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// PushUser

// optional string uid = 1;
void PushUser::clear_uid() {
  uid_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& PushUser::uid() const {
  // @@protoc_insertion_point(field_get:zproto.PushUser.uid)
  return uid_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void PushUser::set_uid(const ::std::string& value) {
  
  uid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:zproto.PushUser.uid)
}
void PushUser::set_uid(const char* value) {
  
  uid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:zproto.PushUser.uid)
}
void PushUser::set_uid(const char* value, size_t size) {
  
  uid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:zproto.PushUser.uid)
}
::std::string* PushUser::mutable_uid() {
  
  // @@protoc_insertion_point(field_mutable:zproto.PushUser.uid)
  return uid_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* PushUser::release_uid() {
  // @@protoc_insertion_point(field_release:zproto.PushUser.uid)
  
  return uid_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void PushUser::set_allocated_uid(::std::string* uid) {
  if (uid != NULL) {
    
  } else {
    
  }
  uid_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), uid);
  // @@protoc_insertion_point(field_set_allocated:zproto.PushUser.uid)
}

// optional int64 access_hash = 2;
void PushUser::clear_access_hash() {
  access_hash_ = GOOGLE_LONGLONG(0);
}
::google::protobuf::int64 PushUser::access_hash() const {
  // @@protoc_insertion_point(field_get:zproto.PushUser.access_hash)
  return access_hash_;
}
void PushUser::set_access_hash(::google::protobuf::int64 value) {
  
  access_hash_ = value;
  // @@protoc_insertion_point(field_set:zproto.PushUser.access_hash)
}

// optional string push_name = 3;
void PushUser::clear_push_name() {
  push_name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& PushUser::push_name() const {
  // @@protoc_insertion_point(field_get:zproto.PushUser.push_name)
  return push_name_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void PushUser::set_push_name(const ::std::string& value) {
  
  push_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:zproto.PushUser.push_name)
}
void PushUser::set_push_name(const char* value) {
  
  push_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:zproto.PushUser.push_name)
}
void PushUser::set_push_name(const char* value, size_t size) {
  
  push_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:zproto.PushUser.push_name)
}
::std::string* PushUser::mutable_push_name() {
  
  // @@protoc_insertion_point(field_mutable:zproto.PushUser.push_name)
  return push_name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* PushUser::release_push_name() {
  // @@protoc_insertion_point(field_release:zproto.PushUser.push_name)
  
  return push_name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void PushUser::set_allocated_push_name(::std::string* push_name) {
  if (push_name != NULL) {
    
  } else {
    
  }
  push_name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), push_name);
  // @@protoc_insertion_point(field_set_allocated:zproto.PushUser.push_name)
}

// optional .zproto.Avatar push_avatar = 5;
bool PushUser::has_push_avatar() const {
  return this != internal_default_instance() && push_avatar_ != NULL;
}
void PushUser::clear_push_avatar() {
  if (GetArenaNoVirtual() == NULL && push_avatar_ != NULL) delete push_avatar_;
  push_avatar_ = NULL;
}
const ::zproto::Avatar& PushUser::push_avatar() const {
  // @@protoc_insertion_point(field_get:zproto.PushUser.push_avatar)
  return push_avatar_ != NULL ? *push_avatar_
                         : *::zproto::Avatar::internal_default_instance();
}
::zproto::Avatar* PushUser::mutable_push_avatar() {
  
  if (push_avatar_ == NULL) {
    push_avatar_ = new ::zproto::Avatar;
  }
  // @@protoc_insertion_point(field_mutable:zproto.PushUser.push_avatar)
  return push_avatar_;
}
::zproto::Avatar* PushUser::release_push_avatar() {
  // @@protoc_insertion_point(field_release:zproto.PushUser.push_avatar)
  
  ::zproto::Avatar* temp = push_avatar_;
  push_avatar_ = NULL;
  return temp;
}
void PushUser::set_allocated_push_avatar(::zproto::Avatar* push_avatar) {
  delete push_avatar_;
  push_avatar_ = push_avatar;
  if (push_avatar) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:zproto.PushUser.push_avatar)
}

inline const PushUser* PushUser::internal_default_instance() {
  return &PushUser_default_instance_.get();
}
#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace zproto

// @@protoc_insertion_point(global_scope)