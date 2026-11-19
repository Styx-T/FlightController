cmake_minimum_required(VERSION 3.20)

project(flight_controller LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)

add_library(flight_core
    src/pid.cpp
    src/flight_controller.cpp
    src/simulator.cpp
)

target_include_directories(flight_core
    PUBLIC include
)

add_executable(flight_sim
    src/main.cpp
)

target_link_libraries(flight_sim
    PRIVATE flight_core
)
