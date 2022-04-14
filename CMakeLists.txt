cmake_minimum_required(VERSION 3.21)
project(nexll)

set(CMAKE_CXX_STANDARD 14)

add_executable(nexll dlink.cpp dlink.h source.cpp)
