cmake_minimum_required(VERSION 3.21)
project(great_project)

set(CMAKE_CXX_STANDARD 17)

add_executable(great_project main.cpp sqlite3.c sqlite3.h exec_db_func.cpp exec_db_func.h teacher.cpp teacher.h alg_funcs.h alg_funcs.cpp)
