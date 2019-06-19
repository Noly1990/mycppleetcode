cmake_minimum_required (VERSION 2.6)

project (project1)

include_directories("${PROJECT_SOURCE_DIR}/cnyj")

add_subdirectory(cnyj)

add_executable(project1 main.cpp)

target_link_libraries(project1 cnyj)