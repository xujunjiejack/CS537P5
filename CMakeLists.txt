cmake_minimum_required(VERSION 3.6)
project(CS536P5)

set(CMAKE_C_STANDARD 99)

set(SOURCE_FILES main.c xv6_update/xv6/user/spam_write.c)
add_executable(CS536P5 ${SOURCE_FILES})