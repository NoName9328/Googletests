set(SOURCES
    tests_main.cpp
)

add_executable(Tests ${SOURCES})

include(GoogleTest)
enable_testing()

target_link_libraries(Tests
    PUBLIC
    GTest::gtest
    GTest::gmock
)
