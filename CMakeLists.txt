cmake_minimum_required(VERSION 3.21)
project(669RayTracing)

set(CMAKE_CXX_STANDARD 14)
set(SRC_FILE src/main.cpp
        src/camera.cpp
        src/hittable_list.cpp
        src/util.cpp
        src/vec3.cpp
        src/ray.cpp
        src/hittable.cpp
        src/sphere.cpp
        src/interval.cpp src/material.cpp src/material.h src/aabb.cpp src/aabb.h src/bvh.cpp src/bvh.h)
include_directories(/opt/homebrew/include)
add_executable(669RayTracing ${SRC_FILE})
