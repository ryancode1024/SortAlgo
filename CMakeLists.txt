cmake_minimum_required(VERSION 3.2)

project(SortAlgo)

MESSAGE(STATUS "BINARY DIR: " ${PROJECT_BINARY_DIR})
MESSAGE(STATUS "SOURCE DIR: " ${PROJECT_SOURCE_DIR})

# source file path
# aux_source_directory(src/ DIR_SRCS)
aux_source_directory(test/ DIR_SRCS)

# add_subdirectory(src bin)

add_executable(${PROJECT_NAME} ${DIR_SRCS})