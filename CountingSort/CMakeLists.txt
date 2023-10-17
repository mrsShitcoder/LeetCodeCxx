cmake_minimum_required(VERSION 3.26)

project(CountingSort)

find_package(GTest REQUIRED)

add_subdirectory(RelativeSortArray)

add_executable(${PROJECT_NAME} Tests.cpp)

target_link_libraries(${PROJECT_NAME} PRIVATE RelativeSortArray GTest::GTest pthread)


