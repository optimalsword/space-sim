cmake_minimum_required(VERSION 3.23)
project(space_sim C)

set(CMAKE_C_STANDARD 99)

find_package(SDL2 REQUIRED)
include_directories(${SDL_INCLUDE_DIRS})

add_executable(space_sim main.c)
target_link_libraries(space_sim ${SDL2_LIBRARIES})
