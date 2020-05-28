cmake_minimum_required (VERSION 3.5.1)

project(cache_proof)

add_subdirectory(benchmark)
add_executable(vec_list vec_list.cpp)
add_executable(vec vec.cpp)
add_executable(best_cpu best_cpu.cpp)
add_executable(lst lst.cpp)
target_link_libraries(vec_list benchmark::benchmark)
