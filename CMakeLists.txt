cmake_minimum_required(VERSION 3.16)
project(cplusplus_future)

set(CMAKE_CXX_STANDARD 11)

add_executable(cplusplus_future Singleton/main.cpp Singleton/Singleton.cpp Singleton/Singleton.h main.cpp)