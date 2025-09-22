cmake_minimum_required(VERSION 3.10)
project(GameOfLife)

file(GLOB SOURCES
    include/*.hpp
    src/*.cpp
    main.cpp
    )

add_executable(GameOfLife ${SOURCES})
target_compile_features(GameOfLife PRIVATE cxx_std_17)