cmake_minimum_required(VERSION 3.9.1)
set (CMAKE_CXX_STANDARD 17)
project(ml)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

find_package(grumble REQUIRED)
find_package(SDL2 REQUIRED)
find_package(glad REQUIRED)
find_package(sokol REQUIRED)
find_package(imgui REQUIRED)

add_executable(ml src/main.cpp src/rendering/sokol.cpp src/core/SDLApplication.cpp src/rendering/SokolRendererManager.cpp src/input/SDLInputManager.cpp src/rendering/SokolFactory.cpp src/core/CameraMovementSystem.cpp src/debug/ImGuiDebugView.cpp)
target_link_libraries(ml grumble::grumble)
target_link_libraries(ml SDL2::SDL2)
target_link_libraries(ml sokol::sokol)
target_link_libraries(ml glad::glad)
target_link_libraries(ml imgui::imgui)

