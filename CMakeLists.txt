cmake_minimum_required(VERSION 4.0)
project(ensea_algo_tp1)

set(CMAKE_CXX_STANDARD 20)

add_executable(ensea_algo_tp1
        main.cpp
        src/test_functions.cpp
        src/stack/StackByArray.cpp
        src/stack/StackByLinkedList.cpp
        src/queue/QueueByArray.cpp
)

target_include_directories(ensea_algo_tp1 PRIVATE
        src
        src/stack
        src/queue
)
