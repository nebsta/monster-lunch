cmake_minimum_required(VERSION 3.9.1)
project(MonsterLunch)

find_package(grumble)

add_executable(ml main.cpp)
target_link_libraries(ml grumble::grumble)

