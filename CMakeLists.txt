cmake_minimum_required(VERSION 3.23)
project(cpp_the_complete_guide CXX)

set(CMAKE_CXX_STANDARD 23)

add_executable(structbind1 lang/structbind1.cpp lang/structbind1.hpp lang/customer1.hpp)

#set_target_properties(app PROPERTIES LINKER_LANGUAGE CXX)