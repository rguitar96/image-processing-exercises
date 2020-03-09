cmake_minimum_required(VERSION 2.8)

project(exercises)

find_package(OpenCV REQUIRED)

add_executable(exercise_11 exercise_11.cpp)

target_link_libraries(exercise_11 ${OpenCV_LIBS})