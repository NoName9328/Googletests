cmake_minimum_required(VERSION 3.1)

cmake_policy(SET CMP0048 NEW)
project(LerningGoogleTests)

enable_testing()

add_subdirectory(src)
add_subdirectory(libs/googletest)
