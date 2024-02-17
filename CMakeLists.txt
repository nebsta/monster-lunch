cmake_minimum_required(VERSION 3.9.1)
project(MonsterLunch)

find_package(grumble)
find_package(SDL2)

add_executable(ml main.cpp)
target_link_libraries(ml grumble::grumble)
target_link_libraries(ml SDL2::SDL2)

