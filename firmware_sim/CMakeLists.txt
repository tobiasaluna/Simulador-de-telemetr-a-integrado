cmake_minimum_required(VERSION 3.10)
project(telemetry_sim)

set(CMAKE_CXX_STANDARD 17)

add_executable(telemetry_sim
    main.cpp
    telemetry.cpp
    protocol.cpp
)
