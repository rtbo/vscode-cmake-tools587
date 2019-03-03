cmake_minimum_required(VERSION 3.1)

project(Library)

add_library(Square STATIC
    square.h
    square.cc
)

target_include_directories(Square PUBLIC .)
