cmake_minimum_required(VERSION 3.14)
project(get_next_line C)

set(CMAKE_C_STANDARD 99)

include_directories(.)
include_directories(./libft)
add_executable(GETNEXTLINE main.c get_next_line.c)
find_library(FT ft libft)
target_link_libraries(GETNEXTLINE LINK_PUBLIC ${FT}/libft/libft.a)

add_executable(get_next_line main.c get_next_line.h get_next_line.c)