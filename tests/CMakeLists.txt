project(Tests)

set(SOURCES
    tests_main.cpp
    ivehicletest.cpp
    deliverycompanytest.cpp
)
set(BINARY_NAME tests${CMAKE_PROJECT_NAME})

set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)

add_executable(${PROJECT_NAME} ${SOURCES})

add_test(NAME ${BINARY_NAME} COMMAND ${BINARY_NAME})

target_link_libraries(Tests
    GTest::gtest
    GTest::gmock
    app_lib
)

include_directories(${CMAKE_SOURCE_DIR}/src)
