cmake_minimum_required(VERSION 3.22.5)

project("example_00")

include_directories(${PROJECT_SOURCE_DIR})
add_executable(example_00 main.cpp foo.cpp)  # be sure there's exactly one main() function in the source files