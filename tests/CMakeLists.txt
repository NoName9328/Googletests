set(SOURCES
    deliverycompanytest.cpp
    tests_main.cpp
)
set(BINARY_NAME tests${CMAKE_PROJECT_NAME})

set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)

add_executable(Tests ${SOURCES})

add_test(NAME ${BINARY_NAME} COMMAND ${BINARY_NAME})

target_link_libraries(Tests
    GTest::gtest
    GTest::gmock
)
