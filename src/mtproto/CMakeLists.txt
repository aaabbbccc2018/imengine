include_directories(. ..)

set (SRC_LIST
    cc/schema.tl.core_types.pb.cc
    cc/schema.tl.core_types.pb.h
    cc/schema.tl.crc32.pb.cc
    cc/schema.tl.crc32.pb.h
    cc/schema.tl.handshake.pb.cc
    cc/schema.tl.handshake.pb.h
    cc/schema.tl.handshake_service.pb.cc
    cc/schema.tl.handshake_service.pb.h
    cc/schema.tl.sync.pb.cc
    cc/schema.tl.sync.pb.h
    cc/schema.tl.sync_service.pb.cc
    cc/schema.tl.sync_service.pb.cc
    cc/schema.tl.transport.pb.cc
    cc/schema.tl.transport.pb.h
    cc/schema.tl.transport_service.pb.cc
    cc/schema.tl.transport_service.pb.h

#    core/mtproto_message.cc
#    core/mtproto_message.h
#    core/mtproto_message_register.cc
#    core/parsed_maually_types.cc
#    core/parsed_maually_types.h
#    core/tl_bool.h
#    core/tl_codec_util.cc
#    core/tl_codec_util.h
#    core/tl_error.h
#    core/tl_null.h
#    core/tl_object.cc
#    core/tl_object.h
#    core/tl_types.h
#    core/tl_vector.cc
#    core/tl_vector.h
    )
add_library(mtproto STATIC ${SRC_LIST})
target_link_libraries(mtproto)
