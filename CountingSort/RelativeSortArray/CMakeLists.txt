cmake_minimum_required(VERSION 3.26)

project(RelativeSortArray)

file(GLOB_RECURSE CUR_SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/*.cpp")
file(GLOB_RECURSE CUR_HEADERS "${CMAKE_CURRENT_SOURCE_DIR}/*.hpp")

add_library(${PROJECT_NAME} STATIC ${CUR_SOURCES} ${CUR_HEADERS})



