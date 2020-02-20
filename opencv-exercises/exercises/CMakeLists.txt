cmake_minimum_required(VERSION 2.8)

project(exercises)

find_package(OpenCV REQUIRED)

add_executable(exercise2a exercise2a.cpp)
add_executable(exercise2b exercise2b.cpp)

target_link_libraries(exercise2a ${OpenCV_LIBS})
target_link_libraries(exercise2b ${OpenCV_LIBS})