include_directories(. ..)

set (SRC_LIST
    )

add_executable (session ${SRC_LIST})
target_link_libraries (session net base)
