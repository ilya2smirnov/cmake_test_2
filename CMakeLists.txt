cmake_minimum_required(VERSION 3.16)

project(cmake_test_2)

add_executable(cmake_test_2 source/cmake_test_2/main.cpp)

target_include_directories(cmake_test_2 PUBLIC source)

add_subdirectory($ENV{CMAKE_TEST_1_PATH} ${CMAKE_BINARY_DIR}/lib/cmake_test_1)

target_link_libraries(cmake_test_2 cmake_test_1)

set_target_properties(cmake_test_2
        PROPERTIES
        ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/lib"
        LIBRARY_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/lib"
        RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin"
        )