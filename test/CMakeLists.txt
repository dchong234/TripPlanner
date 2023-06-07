cmake_minimum_required(VERSION 3.20)
project(TripPlannerTests)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${PROJECT_BINARY_DIR}/bin")
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY "${PROJECT_BINARY_DIR}/lib")

add_subdirectory(googletest)


add_executable(TripPlannerTests
    test.cpp
)

target_link_libraries(TripPlannerTests gtest gtest_main)
target_link_libraries(TripPlannerTests simpleLibrary)