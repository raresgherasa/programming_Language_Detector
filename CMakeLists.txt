cmake_minimum_required(VERSION 3.10)
project(FastDetect)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS "-O3 -march=native -flto")

include_directories(include)

# Sources
set(SOURCES
    src/main.cpp
    src/Detector.cpp
    src/GeneratedLanguages.cpp
)

add_executable(FastDetect ${SOURCES})
target_link_libraries(FastDetect m)
