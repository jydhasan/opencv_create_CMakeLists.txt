cmake_minimum_required(VERSION 3.0)
project(opencv)
set(OpenCV_DIR C:/tools/opencv/build)
find_package(OpenCV REQUIRED)
add_executable(${PROJECT_NAME} main.cpp)
target_link_libraries(${PROJECT_NAME} ${OpenCV_LIBS})
