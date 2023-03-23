cmake_minimum_required(VERSION 3.10)
project(DP)

set(CMAKE_CPP_STANDARD 17)

include_directories(include)
aux_source_directory(src/Observer OBS_SRCS)
aux_source_directory(src/SimpleFactory SF_SRCS)
aux_source_directory(src/Factory F_SRCS)
aux_source_directory(src/AbstractFactory AF_SRCS)
add_executable(OBP ${OBS_SRCS})
add_executable(SFP ${SF_SRCS})
add_executable(FP ${F_SRCS})
add_executable(AFP ${AF_SRCS})
