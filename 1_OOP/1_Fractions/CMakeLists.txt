cmake_minimum_required(VERSION 3.19)

set(TARGET Fraction)

project(${TARGET})

add_executable(
    ${TARGET}
    src/main.cpp
    src/fraction.cpp
)

target_include_directories(
    ${TARGET} PUBLIC
    inc
)