cmake_minimum_required(VERSION 3.27.7 FATAL_ERROR)

include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../include)

file(GLOB TESTS_FILES ${CMAKE_CURRENT_SOURCE_DIR}/unit/*.c)
file(GLOB SRC_FILES   ${CMAKE_CURRENT_SOURCE_DIR}/../src/adder.c)

target_link_directories( ${PROJECT_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/external/Unity/src )

if(RUN_COVERAGE)
    message("Running coverage")
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g -fprofile-arcs -ftest-coverage --coverage")
    set(CMAKE_CXX_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -lgcov --coverage")
endif()

# crear executable
add_executable( test_${PROJECT_NAME} ${SRC_FILES} ${TESTS_FILES} )

target_link_libraries( test_${PROJECT_NAME} unity )

# Add test
add_test( NAME test_${PROJECT_NAME} COMMAND test_${PROJECT_NAME} )