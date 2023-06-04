cmake_minimum_required(VERSION 3.0.0)
project(MakeTest)

set(CMAKE_CXX_STANDARD 17)

find_package (Eigen3 3.3 REQUIRED NO_MODULE)
if(NOT ${Eigen3_FOUND})
    message("Eigen3 not found")
else()
    message("Found Eigen3!")
    include_directories(${EIGEN3_INCLUDE_DIR})
    add_executable(CMakeMatrix main.cpp)
    target_link_libraries(CMakeMatrix Eigen3::Eigen)
endif()
