cmake_minimum_required (VERSION 2.8)
project (demo)
 
include_directories (func1 func2)
aux_source_directory (func1 SRC_LIST1)
aux_source_directory (func2 SRC_LIST2)
add_executable (main main.c ${SRC_LIST1} ${SRC_LIST2})
