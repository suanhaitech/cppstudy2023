cmake_minimum_required (VERSION 3.5)
project (demo)
aux_source_directory(. SRC_FILES)
add_executable(main ${SRC_FILES})
