#  Copyright (c) 2016, https://github.com/nebula-im/nebula
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

cmake_minimum_required(VERSION 2.8)

project(imengine C CXX)

#add_compile_options(-std=c++1y)
add_compile_options(-fPIC)
add_compile_options(-DFOLLY_HAVE_CLOCK_GETTIME=1)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g -std=c++1y")

set(CMAKE_MODULE_PATH ${CMAKE_SOURCE_DIR}/cmake/)

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)


#set(CMAKE_EXE_LINKER_FLAGS "-lpthread -lrt -ldl")

add_subdirectory(src/third_party/nebula/nebula)
add_subdirectory(src/access/frontend)
add_subdirectory(src/relay)

#add_subdirectory(src)
#add_subdirectory(biz_model)
#add_subdirectory(dal)
#add_subdirectory(client/client)
