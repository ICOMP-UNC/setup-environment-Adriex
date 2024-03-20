cmake_minimum_required(VERSION 3.27.7 FATAL_ERROR)

project(
    Tp0
    VERSION 0.1.0
    LANGUAGES C
    DESCRIPTION "Tp0"
)

set (CMAKE_C_STANDARD 17)

include_directories(include)

file(GLOB SOURCES "src/*.c")

add_executable( ${PROJECT_NAME} ${SOURCES} )