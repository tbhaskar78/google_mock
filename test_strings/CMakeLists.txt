cmake_minimum_required(VERSION  3.16)
set(CMAKE_CXX_STANDARD 11)
find_package(GTest REQUIRED)
message("GTEST_INCLUDE_DIRS = ${GTEST_INCLUDE_DIR}")

add_library(commonLibrary libraryCode.cpp)
add_executable(myExec main.cpp)
target_link_libraries(myExec commonLibrary)

add_executable(testRunner testRunner.cpp)
target_link_libraries(testRunner commonLibrary ${GTEST_LIBRARIES} pthread)
