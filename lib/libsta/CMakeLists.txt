cmake_minimum_required(VERSION 3.27.7 FATAL_ERROR)

project(
    "libsta"
    VERSION 0.1.0
    LANGUAGES C
    DESCRIPTION "Ejemplo de libreria estatica en C."
)

set (CMAKE_C_STANDARD 17)

include_directories(include)

file(GLOB SOURCES "src/*.c")

add_library( ${PROJECT_NAME} STATIC ${SOURCES} ) 

