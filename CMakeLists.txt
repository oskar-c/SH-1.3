cmake_minimum_required(VERSION 3.0.0)
project(SH_executable VERSION 0.1.0)

set(CMAKE_PREFIX_PATH "${CMAKE_CURRENT_SOURCE_DIR}/opencv")


include(CTest)
enable_testing()

find_package(OpenCV REQUIRED PATHS "${CMAKE_CURRENT_SOURCE_DIR}/opencv")
include_directories( ${OpenCV_INCLUDE_DIRS} )

add_executable(SH_executable main.cpp)

target_link_libraries( SH_executable ${OpenCV_LIBS} )

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
