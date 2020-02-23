cmake_minimum_required(VERSION 2.8)

project(exercises)

find_package(OpenCV REQUIRED)

add_executable(exercise2a exercise2a.cpp)
add_executable(exercise2b exercise2b.cpp)
add_executable(exercise2d_sup exercise2d_sup.cpp)
add_executable(exercise2d_inf exercise2d_inf.cpp)
add_executable(exercise3a_erosion exercise3a_erosion.cpp)
add_executable(exercise3b_dilation exercise3b_dilation.cpp)

target_link_libraries(exercise2a ${OpenCV_LIBS})
target_link_libraries(exercise2b ${OpenCV_LIBS})
target_link_libraries(exercise2d_sup ${OpenCV_LIBS})
target_link_libraries(exercise2d_inf ${OpenCV_LIBS})
target_link_libraries(exercise3a_erosion ${OpenCV_LIBS})
target_link_libraries(exercise3b_dilation ${OpenCV_LIBS})