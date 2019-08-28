cmake_minimum_required(VERSION 2.8.12)
project(PackageTest CXX)

include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup(TARGETS)

# find_package(cmake_training REQUIRED
#     HINTS ${CONAN_LIBRARY_DIR})

add_executable(example example.cpp)
target_link_libraries(example CONAN_PKG::cmake_training)

