cmake_minimum_required(VERSION 3.30 FATAL_ERROR)

add_subdirectory(deps/cpp-logging)

project(thing VERSION 0.1.0 LANGUAGES CXX)

add_executable(${PROJECT_NAME} src/main.cpp)

target_include_directories(${PROJECT_NAME} PRIVATE include deps)
target_link_libraries(${PROJECT_NAME} logging)
