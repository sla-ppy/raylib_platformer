cmake_minimum_required(VERSION 3.19)
project(raylib_platformer)

# suppress warning for CMP0072
set(OpenGL_GL_PREFERENCE LEGACY)

# adds local subdirectory
add_subdirectory("raylib")

add_executable(raylib_platformer src/main.cpp)

# where -Wall -Wextra -Wpedantic are extra compiler warnings
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -Wpedantic")

# linking lib so its accessible
target_link_libraries(raylib_platformer raylib)