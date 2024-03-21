cmake_minimum_required(VERSION 3.27.7 FATAL_ERROR)

project(
    "libdyn"
    VERSION 0.1.0
    LANGUAGES C
    DESCRIPTION "Ejemplo de libreria dinamica en C."
)

set (CMAKE_C_STANDARD 17)

include_directories(include)

file(GLOB SOURCES "src/*.c")

add_library( ${PROJECT_NAME} SHARED ${SOURCES} ) 

