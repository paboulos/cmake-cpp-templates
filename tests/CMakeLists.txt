include(Catch)
set(TEST_SOURCES "testdemo.cc")
set(TEST_INCLUDES "./")
add_executable(${TEST_MAIN} ${TEST_SOURCES})
target_include_directories(${TEST_MAIN} PUBLIC ${TEST_INCLUDES})
target_link_libraries(
    ${TEST_MAIN}
    PUBLIC
    ${LIBRARY_NAME}
    Catch2::Catch2WithMain
    )
# add ctest discovery
catch_discover_tests(${TEST_MAIN})
