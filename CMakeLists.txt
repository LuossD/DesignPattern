cmake_minimum_required(VERSION 3.17)
project(LSP C)

set(CMAKE_C_STANDARD 11)


add_executable(LSP main.c)
add_executable(file_op src/file_op.c)
add_executable(s_file src/sample_file.c)
add_executable(writev src/writev.c)
add_executable(readv src/readv.c)
add_executable(epoll src/epoll.c)
add_executable(time src/time/time.c)
add_executable(file_sys src/file_sys.c)
add_executable(sig src/signal.c)