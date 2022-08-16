cmake_minimum_required(VERSION 3.22.5)

set(CMAKE_CXX_COMPILER g++)
add_executable(math_test tester.cpp)

add_test(NAME "MATHTEST1" COMMAND math_test WORKING_DIRECTORY ${CMAKE_BINARY_DIR} )
add_test(NAME "MATHTEST2" COMMAND math_test ${CMAKE_CXX_COMPILER} WORKING_DIRECTORY ${CMAKE_BINARY_DIR} )