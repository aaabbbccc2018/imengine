include_directories(.. ../..)

set (SRC_LIST
    auth_key_server.cc
    auth_key_server.h
    auth_key_service_impl.cc
    auth_key_service_impl.h
    ../../base/brpc_service_util.cc
    ../../base/brpc_service_util.h
    )

add_executable (auth_key ${SRC_LIST})
target_link_libraries (auth_key ${BRPC_LIB} ${DYNAMIC_LIB})
