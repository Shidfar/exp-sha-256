cmake_minimum_required(VERSION 3.8)
project(sha_256)

set(CMAKE_C_STANDARD 99)

set(SOURCE_FILES main.c sha_256.c sha_256.h)
add_executable(sha_256 ${SOURCE_FILES})