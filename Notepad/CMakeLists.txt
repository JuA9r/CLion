cmake_minimum_required(VERSION 4.1)
project(Notepad)

set(CMAKE_CXX_STANDARD 20)

add_definitions(-DUNICODE -D_UNICODE)

add_executable(Notepad main.cpp)

target_link_libraries(Notepad PRIVATE user32 gdi32)

set_target_properties(Notepad PROPERTIES WIN32_EXECUTABLE TRUE)
