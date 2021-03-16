cmake_minimum_required(VERSION 3.17)
project(raylib_platformer)

#adds local subdirectory
add_subdirectory("raylib")

add_executable(raylib_platformer main.cpp)

#linking lib so its accessible
target_link_libraries(raylib_platformer raylib)