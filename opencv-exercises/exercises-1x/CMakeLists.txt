cmake_minimum_required(VERSION 2.8)

project(exercises)

find_package(OpenCV REQUIRED)

add_executable(exercise_11a_flatzone exercise_11a_flatzone.cpp)
add_executable(exercise_13a_minimum exercise_13a_minimum.cpp)
add_executable(exercise_13b_maximum exercise_13b_maximum.cpp)

target_link_libraries(exercise_11a_flatzone ${OpenCV_LIBS})
target_link_libraries(exercise_13a_minimum ${OpenCV_LIBS})
target_link_libraries(exercise_13b_maximum ${OpenCV_LIBS})