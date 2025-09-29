cmake_minimum_required(VERSION 3.10)
project(GameOfLife)

find_package(Curses REQUIRED)
include_directories(${CURSES_INCLUDE_DIR})

file(GLOB SOURCES
    include/*.hpp
    src/*.cpp
    main.cpp
    )

add_executable(GameOfLife ${SOURCES})
target_link_libraries(GameOfLife ${CURSES_LIBRARIES})
target_compile_features(GameOfLife PRIVATE cxx_std_17)