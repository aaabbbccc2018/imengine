#  Copyright (c) 2018, https://github.com/nebulaim/nebula
#  All rights reserved.
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#   http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
#

find_package(Boost REQUIRED COMPONENTS system thread filesystem)
find_package(OpenSSL REQUIRED)
find_package(Threads REQUIRED)
find_library(GLOG_LIBRARY_PATH glog)
find_library(GFLAGS_LIBRARY_PATH gflags)
find_package(Folly REQUIRED)
find_package(Wangle REQUIRED)
find_package(Proxygen REQUIRED)
# find_package(Proxygen REQUIRED COMPONENTS proxygenhttpserver proxygenlib)
# find_package(MySQL REQUIRED)

include_directories(
    ..
    ${CMAKE_SOURCE_DIR}
    ${BOOST_INCLUDE_DIR}
    ${FOLLY_INCLUDE_DIR}
    ${WANGLE_INCLUDE_DIR}
    ${PROXYGEN_INCLUDE_DIR}
    ${MYSQL_INCLUDE_DIR}
    ${OPENSSL_INCLUDE_DIR}
    ${INCLUDE_DIR}
    ${PROJECT_SOURCE_DIR}/src
    ${PROJECT_SOURCE_DIR}/src/third_party/nebula
    ${PROJECT_SOURCE_DIR}/src/third_party/brpc
)

#link_directories(/usr/local/Cellar/openssl/1.0.2d_1/lib /opt/local/lib /usr/local/lib /usr/local/mysql/lib ${PROJECT_BINARY_DIR}/lib)

message("Folly lib: " ${FOLLY_LIBRARY})
message("Wangle lib: " ${WANGLE_LIBRARY})
message("Proxygen lib: " ${PROXYGEN_LIBRARY})
# message("MySQL lib: " ${MYSQL_LIB})
message("OpenSSL: " ${OPENSSL_SSL_LIBRARY})

link_directories(
    ${FOLLY_LIBRARYDIR}
    ${WANGLE_LIBRARYDIR}
    ${PROXYGEN_LIBRARYDIR}
    ${BOOST_LIBRARYDIR}
    # ${MYSQL_LIB_DIR}
    ${OPENSSL_LIBRARYDIR}
    ${PROJECT_BINARY_DIR}/lib
    /usr/local/lib
)

set (SRC_LIST
    relay_server.cc
    relay_server.h
    tgvoip_handler.cc
    tgvoip_handler.h
  # relay_table.cc
  # relay_table.h
)

add_executable (relay ${SRC_LIST})
target_link_libraries (relay net base)
