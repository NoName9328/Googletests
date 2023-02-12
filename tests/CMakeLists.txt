set(SOURCES
    tests_main.cpp
)

add_executable(Tests ${SOURCES})


target_link_libraries(Tests
    GTest::gtest
    GTest::gmock
)
