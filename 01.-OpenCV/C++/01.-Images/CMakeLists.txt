cmake_minimum_required(VERSION 3.0)

project(OpenCVTest )

find_package(OpenCV REQUIRED )

include_directories( ${OpenCV_INCLUDE_DIRS} )

add_executable(Main Main.cpp )

target_link_libraries(Main ${OpenCV_LIBS} )