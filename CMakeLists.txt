cmake_minimum_required(VERSION 3.7)

project(LerningGoogleTests LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_subdirectory(src)
add_subdirectory(tests)
add_subdirectory(libs/googletest)


