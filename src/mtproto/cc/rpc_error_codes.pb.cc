// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: rpc_error_codes.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "rpc_error_codes.pb.h"

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

namespace protobuf_rpc_5ferror_5fcodes_2eproto {


namespace {

const ::google::protobuf::EnumDescriptor* file_level_enum_descriptors[1];

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
};

const ::google::protobuf::uint32 TableStruct::offsets[1] = {};
static const ::google::protobuf::internal::MigrationSchema* schemas = NULL;
static const ::google::protobuf::Message* const* file_default_instances = NULL;
namespace {

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "rpc_error_codes.proto", schemas, file_default_instances, TableStruct::offsets, factory,
      NULL, file_level_enum_descriptors, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
}

}  // namespace
void TableStruct::InitDefaultsImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::InitProtobufDefaults();
}

void InitDefaults() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &TableStruct::InitDefaultsImpl);
}
namespace {
void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\025rpc_error_codes.proto\022\007mtproto*\345\023\n\017TLR"
      "pcErrorCodes\022\021\n\rERROR_CODE_OK\020\000\022\024\n\016FILE_"
      "MIGRATE_X\020\230\277\022\022\025\n\017PHONE_MIGRATE_X\020\231\277\022\022\027\n\021"
      "NETWORK_MIGRATE_X\020\232\277\022\022\024\n\016USER_MIGRATE_X\020"
      "\233\277\022\022\024\n\017ERROR_SEE_OTHER\020\257\002\022\027\n\021FIRSTNAME_I"
      "NVALID\020\200\265\030\022\026\n\020LASTNAME_INVALID\020\201\265\030\022\032\n\024PH"
      "ONE_NUMBER_INVALID\020\202\265\030\022\033\n\025PHONE_CODE_HAS"
      "H_EMPTY\020\203\265\030\022\026\n\020PHONE_CODE_EMPTY\020\204\265\030\022\030\n\022P"
      "HONE_CODE_EXPIRED\020\205\265\030\022\024\n\016API_ID_INVALID\020"
      "\206\265\030\022\033\n\025PHONE_NUMBER_OCCUPIED\020\207\265\030\022\035\n\027PHON"
      "E_NUMBER_UNOCCUPIED\020\210\265\030\022\023\n\rUSERS_TOO_FEW"
      "\020\211\265\030\022\024\n\016USERS_TOO_MUCH\020\212\265\030\022\036\n\030TYPE_CONST"
      "RUCTOR_INVALID\020\213\265\030\022\027\n\021FILE_PART_INVALID\020"
      "\214\265\030\022\031\n\023FILE_PART_X_MISSING\020\215\265\030\022\032\n\024MD5_CH"
      "ECKSUM_INVALID\020\216\265\030\022\036\n\030PHOTO_INVALID_DIME"
      "NSIONS\020\217\265\030\022\030\n\022FIELD_NAME_INVALID\020\220\265\030\022\026\n\020"
      "FIELD_NAME_EMPTY\020\221\265\030\022\025\n\017MSG_WAIT_FAILED\020"
      "\222\265\030\022\"\n\034PARTICIPANT_VERSION_OUTDATED\020\223\265\030\022"
      "\025\n\017USER_RESTRICTED\020\224\265\030\022\027\n\021NAME_NOT_MODIF"
      "IED\020\225\265\030\022\035\n\027USER_NOT_MUTUAL_CONTACT\020\226\265\030\022\030"
      "\n\022BOT_GROUPS_BLOCKED\020\227\265\030\022\026\n\020FILE_REFEREN"
      "CE_X\020\364\270\030\022\030\n\022FILE_TOKEN_INVALID\020\365\270\030\022\033\n\025RE"
      "QUEST_TOKEN_INVALID\020\366\270\030\022\030\n\022PHONE_CODE_IN"
      "VALID\020\231\265\030\022\031\n\023PHONE_NUMBER_BANNED\020\236\265\030\022\035\n\027"
      "SESSION_PASSWORD_NEEDED\020\250\265\030\022\022\n\014CODE_INVA"
      "LID\020\262\265\030\022\033\n\025PASSWORD_HASH_INVALID\020\263\265\030\022\026\n\020"
      "NEW_PASSWORD_BAD\020\264\265\030\022\026\n\020NEW_SALT_INVALID"
      "\020\265\265\030\022\023\n\rEMAIL_INVALID\020\266\265\030\022\027\n\021EMAIL_UNCON"
      "FIRMED\020\267\265\030\022\026\n\020USERNAME_INVALID\020\274\265\030\022\027\n\021US"
      "ERNAME_OCCUPIED\020\275\265\030\022\033\n\025USERNAMES_UNAVAIL"
      "ABLE\020\276\265\030\022\033\n\025USERNAME_NOT_MODIFIED\020\277\265\030\022\033\n"
      "\025USERNAME_NOT_OCCUPIED\020\300\265\030\022\025\n\017CHAT_ID_IN"
      "VALID\020\306\265\030\022\027\n\021CHAT_NOT_MODIFIED\020\307\265\030\022\034\n\026PA"
      "RTICIPANT_NOT_EXISTS\020\310\265\030\022\035\n\027NO_EDIT_CHAT"
      "_PERMISSION\020\311\265\030\022\035\n\027CHAT_TITLE_NOT_MODIFI"
      "ED\020\312\265\030\022\023\n\rNO_CHAT_TITLE\020\313\265\030\022\035\n\027CHAT_ABOU"
      "T_NOT_MODIFIED\020\314\265\030\022\031\n\023CHAT_ADMIN_REQUIRE"
      "D\020\315\265\030\022\031\n\023PARTICIPANT_EXISTED\020\316\265\030\022\025\n\017CHAN"
      "NEL_PRIVATE\020\320\265\030\022\035\n\027CHANNEL_PUBLIC_GROUP_"
      "NA\020\321\265\030\022\034\n\026USER_BANNED_IN_CHANNEL\020\322\265\030\022$\n\036"
      "CHANNELS_ADMIN_PUBLIC_TOO_MUCH\020\223\271\002\022\027\n\021CH"
      "ANNELS_TOO_MUCH\020\324\265\030\022\"\n\034NO_INVITE_CHANNEL"
      "_PERMISSION\020\325\265\030\022\031\n\023INVITE_HASH_EXPIRED\020\332"
      "\265\030\022\031\n\023INVITE_HASH_INVALID\020\333\265\030\022\031\n\023ACCESS_"
      "HASH_INVALID\020\310\266\030\022\031\n\023INPUT_CHANNEL_EMPTY\020"
      "\311\266\030\022\032\n\024USER_NOT_PARTICIPANT\020\312\266\030\022\025\n\017PEER_"
      "ID_INVALID\020\313\266\030\022\030\n\022CHANNEL_ID_INVALID\020\314\266\030"
      "\022\030\n\022MESSAGE_ID_INVALID\020\322\266\030\022\037\n\031MESSAGE_ED"
      "IT_TIME_EXPIRED\020\323\266\030\022\032\n\024MESSAGE_NOT_MODIF"
      "IED\020\324\266\030\022\023\n\rMESSAGE_EMPTY\020\325\266\030\022\024\n\016USER_LEF"
      "T_CHAT\020\254\267\030\022\021\n\013USER_KICKED\020\255\267\030\022\036\n\030USER_AL"
      "READY_PARTICIPANT\020\256\267\030\022\020\n\013BAD_REQUEST\020\220\003\022"
      "\033\n\025AUTH_KEY_UNREGISTERED\020\350\274\030\022\026\n\020AUTH_KEY"
      "_INVALID\020\351\274\030\022\026\n\020USER_DEACTIVATED\020\352\274\030\022\025\n\017"
      "SESSION_REVOKED\020\353\274\030\022\025\n\017SESSION_EXPIRED\020\354"
      "\274\030\022\032\n\024ACTIVE_USER_REQUIRED\020\355\274\030\022\031\n\023AUTH_K"
      "EY_PERM_EMPTY\020\356\274\030\022\021\n\014UNAUTHORIZED\020\221\003\022\035\n\027"
      "USER_PRIVACY_RESTRICTED\020\271\314\030\022!\n\033CALL_PROT"
      "OCOL_LAYER_INVALID\020\272\314\030\022\016\n\tFORBIDDEN\020\223\003\022\025"
      "\n\017ERROR_LOCALIZED\020\360\343\030\022\016\n\tLOCALIZED\020\226\003\022\022\n"
      "\014FLOOD_WAIT_X\020\240\321\031\022\n\n\005FLOOD\020\244\003\022\r\n\010INTERNA"
      "L\020\364\003\022\033\n\025INTERNAL_SERVER_ERROR\020\240\302\036\022\n\n\005OTH"
      "ER\020\365\003\022\013\n\006OTHER2\020\366\003\022\n\n\005DBERR\020\330\004\022\017\n\tDBERR_"
      "SQL\020\300\317$\022\020\n\nDBERR_CONN\020\301\317$\022\025\n\020NOTRETURN_C"
      "LIENT\020\274\005B(\n\033com.nebulaim.engine.mtprotoB"
      "\007MTProtoH\002b\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 2618);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "rpc_error_codes.proto", &protobuf_RegisterTypes);
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

}  // namespace protobuf_rpc_5ferror_5fcodes_2eproto

const ::google::protobuf::EnumDescriptor* TLRpcErrorCodes_descriptor() {
  protobuf_rpc_5ferror_5fcodes_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_rpc_5ferror_5fcodes_2eproto::file_level_enum_descriptors[0];
}
bool TLRpcErrorCodes_IsValid(int value) {
  switch (value) {
    case 0:
    case 303:
    case 400:
    case 401:
    case 403:
    case 406:
    case 420:
    case 500:
    case 501:
    case 502:
    case 600:
    case 700:
    case 40083:
    case 303000:
    case 303001:
    case 303002:
    case 303003:
    case 400000:
    case 400001:
    case 400002:
    case 400003:
    case 400004:
    case 400005:
    case 400006:
    case 400007:
    case 400008:
    case 400009:
    case 400010:
    case 400011:
    case 400012:
    case 400013:
    case 400014:
    case 400015:
    case 400016:
    case 400017:
    case 400018:
    case 400019:
    case 400020:
    case 400021:
    case 400022:
    case 400023:
    case 400025:
    case 400030:
    case 400040:
    case 400050:
    case 400051:
    case 400052:
    case 400053:
    case 400054:
    case 400055:
    case 400060:
    case 400061:
    case 400062:
    case 400063:
    case 400064:
    case 400070:
    case 400071:
    case 400072:
    case 400073:
    case 400074:
    case 400075:
    case 400076:
    case 400077:
    case 400078:
    case 400080:
    case 400081:
    case 400082:
    case 400084:
    case 400085:
    case 400090:
    case 400091:
    case 400200:
    case 400201:
    case 400202:
    case 400203:
    case 400204:
    case 400210:
    case 400211:
    case 400212:
    case 400213:
    case 400300:
    case 400301:
    case 400302:
    case 400500:
    case 400501:
    case 400502:
    case 401000:
    case 401001:
    case 401002:
    case 401003:
    case 401004:
    case 401005:
    case 401006:
    case 403001:
    case 403002:
    case 406000:
    case 420000:
    case 500000:
    case 600000:
    case 600001:
      return true;
    default:
      return false;
  }
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace mtproto

// @@protoc_insertion_point(global_scope)