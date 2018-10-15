cmake_minimum_required(VERSION 3.12)
project(searchFromFile_master)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(searchFromFile_master
        linearSearch.cpp
        linearSearch.h
        main.cpp
        MergeSort.cpp)
