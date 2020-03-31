cmake_minimum_required(VERSION 2.8)

project(exercises)

find_package(OpenCV REQUIRED)

add_executable(exercise_01a_boundary exercise_01a_boundary.cpp)
add_executable(exercise_01b_grassfire exercise_01b_grassfire.cpp)
add_executable(exercise_01c_wheel exercise_01c_wheel.cpp)
add_executable(exercise_01d_watershed exercise_01d_watershed.cpp)

target_link_libraries(exercise_01a_boundary ${OpenCV_LIBS})
target_link_libraries(exercise_01b_grassfire ${OpenCV_LIBS})
target_link_libraries(exercise_01c_wheel ${OpenCV_LIBS})
target_link_libraries(exercise_01d_watershed ${OpenCV_LIBS})