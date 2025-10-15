cmake_minimum_required(VERSION 4.0)
project(ensea_algo_tp1)

set(CMAKE_CXX_STANDARD 20)

add_executable(ensea_algo_tp1
        main.cpp
        src/StackByArray.cpp
        src/test_functions.cpp
        src/test_functions.h
)

target_include_directories(ensea_algo_tp1 PRIVATE
        src
)
