cmake_minimum_required(VERSION 2.8.3)
project(pas C)

set(C_FLAGS -g -Wall)
set(CMAKE_C_COMPILER "gcc")
string(REPLACE ";" " " CMAKE_C_FLAGS "${C_FLAGS}")

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)

add_executable(miniftpd  main.c session.c sysutil.c ftpproto.c privparent.c str.c
            hash.c parseconf.c tunable.c privsock.c)

target_link_libraries(miniftpd crypt)
