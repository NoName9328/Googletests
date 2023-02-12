cmake_minimum_required(VERSION 3.1)

project(LerningGoogleTests)

set(CMAKE_CXX_STANDARD 14)

#target_link_libraries(${PROJECT_NAME} PRIVATE GTest::Main)
#gtest_add_tests(TARGET ${PROJECT_NAME} WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR})

add_subdirectory(libs/googletest)
add_subdirectory(tests)
add_subdirectory(src)


