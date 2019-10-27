cmake_minimum_required(VERSION 3.2)

project(hello-gtkmm)

list(INSERT CMAKE_MODULE_PATH 0 ${PROJECT_SOURCE_DIR}/cmake)

find_package(GTKMM)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_subdirectory(src)
