cmake_minimum_required(VERSION 3.1)

project(Application)

add_subdirectory(Physics EXCLUDE_FROM_ALL)

add_executable(App main.cc)

target_link_libraries(App PRIVATE PhysicsCore)
