cmake_minimum_required(VERSION 3.21)
project(669RayTracing)

set(CMAKE_CXX_STANDARD 14)
include_directories(/opt/homebrew/include)
add_executable(669RayTracing main.cpp camera.cpp hittable_list.cpp util.cpp vec3.cpp ray.cpp hittable.cpp sphere.cpp interval.cpp)
