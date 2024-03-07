cmake_minimum_required(VERSION 3.9.1)
set (CMAKE_CXX_STANDARD 17)
project(ml)

find_package(grumble REQUIRED)
find_package(glfw3 REQUIRED)
find_package(glad REQUIRED)

add_executable(ml src/main.cpp src/core/GLFWApplication.cpp)
target_link_libraries(ml grumble::grumble)
target_link_libraries(ml glfw)
target_link_libraries(ml glad::glad)
