cmake_minimum_required(VERSION 3.10)
project(PlayerLibrary LANGUAGES CXX)

file(GLOB SOURCES "src/*.cpp")

add_library(player_lib STATIC ${SOURCES})

target_include_directories(player_lib PUBLIC include)
