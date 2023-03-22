cmake_minimum_required(VERSION 3.10)
project(DP)

set(CMAKE_CPP_STANDARD 17)
include_directories(include)
aux_source_directory(src SRCS)
add_executable(OBP ${SRCS})
