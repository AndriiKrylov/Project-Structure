cmake_minimum_required(VERSION 3.10)
project(GameLibraryProject LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_subdirectory(lib)

add_executable(main_app src/main.cpp)

target_link_libraries(main_app PRIVATE player_lib)
