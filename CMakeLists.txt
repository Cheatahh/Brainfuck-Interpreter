cmake_minimum_required(VERSION 3.21)
project(bf C)

set(CMAKE_C_STANDARD 99) # C99 standard, should work with C > 90
set(CMAKE_C_FLAGS -m32)  # Enforce 32bit compilation. You may need to adjust this, depending on your preferred toolchain.

add_executable(bfVerbose main_verbose.c)
add_executable(bf main.c)