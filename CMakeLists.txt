cmake_minimum_required(VERSION 3.23)
project(cpp_17_the_complete_guide CXX)

set(CMAKE_CXX_STANDARD 17)

find_package(Threads REQUIRED)

add_executable(structbind1 lang/structbind1.cpp lang/structbind1.hpp lang/customer1.hpp)
add_executable(structbind2 lang/structbind2.cpp lang/structbind2.hpp lang/customer2.hpp)
add_executable(inlinethreadlocal1 lang/inlinethreadlocal1.cpp lang/inlinethreadlocal2.cpp lang/inlinethreadlocal.hpp)
add_executable(aggr14 lang/aggr14.cpp)
add_executable(factory lang/factory.cpp lang/factory.hpp)

target_link_libraries(inlinethreadlocal1 ${CMAKE_THREAD_LIBS_INIT})

