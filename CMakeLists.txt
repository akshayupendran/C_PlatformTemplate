cmake_minimum_required(VERSION 3.10)

# PROJECT_NAME and the Language used.
project(Hello C)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -pedantic -Wno-long-long")
add_subdirectory(src)
add_subdirectory
