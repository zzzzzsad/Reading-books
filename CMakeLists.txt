cmake_minimum_required(VERSION 2.8)
#add_subdirectory(src)
project(test-point)
set(CMAKE_INCLUDE_CURRENT_DIR ON)

add_executable(${PROJECT_NAME}
  src/main.cpp
  include/point.h
)




target_include_directories(${PROJECT_NAME}
  PRIVATE
  "./include/"
)
