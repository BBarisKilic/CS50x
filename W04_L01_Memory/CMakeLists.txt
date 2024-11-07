cmake_minimum_required(VERSION 3.29)
project(W04_L01_Memory C)

set(CMAKE_C_STANDARD 17)

add_executable(W04_L01_Memory addresses.c cs50.c compare.c)
add_executable(compare compare.c cs50.c)
add_executable(copy copy.c cs50.c)
add_executable(memory memory.c)
add_executable(garbage garbage.c)
add_executable(swap swap.c)
add_executable(get get.c)
add_executable(phonebook phonebook.c cs50.c)
add_executable(cp cp.c)
