# Specify minimum version fro CMake
cmake_minimum_required(VERSION 3.0)

# Project'name 
project(thanos)

# Set the output folder where your program will be created
set(CMAKE_BINARY_DIR ${CMAKE_SOURCE_DIR}/bin)
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR})
set(LIBRARY_OUTPUT_PATH ${CMAKE_BINARY_DIR})

# The following folder will be included
include_directories("${PROJECT_SOURCE_DIR}/src")

add_executable(thanos ${PROJECT_SOURCE_DIR}/src/main.cpp)

