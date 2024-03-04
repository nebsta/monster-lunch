cmake_minimum_required(VERSION 3.9.1)
set (CMAKE_CXX_STANDARD 17)
project(ml)

find_package(grumble REQUIRED)
find_package(SDL2 REQUIRED)

add_executable(ml src/main.cpp src/rendering/SDLRendererManager.cpp)
target_link_libraries(ml grumble::grumble)
target_link_libraries(ml SDL2::SDL2)

