cmake_minimum_required(VERSION 3.20)

project(design-patterns)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_executable(factory-method-basic)

add_subdirectory(creational)
add_subdirectory(targets)

