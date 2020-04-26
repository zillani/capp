cmake_minimum_required(VERSION 3.16)
project(cpp-snippets)

set(CMAKE_CXX_STANDARD 14)

add_executable(main main.cpp)
add_executable(listing_1.1 concurrency/manning/listings/listing_1.1.cpp)
add_executable(listing_2.5 concurrency/manning/listings/listing_2.5.cpp)
add_executable(listing_2.6 concurrency/manning/listings/listing_2.6.cpp)
add_executable(listing_2.8 concurrency/manning/listings/listing_2.8.cpp)
