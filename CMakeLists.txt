# CMake version to be used
cmake_minimum_required(VERSION 3.8)
# Project name and supported languages
project(TDD-CMake-GTest C CXX)

#Use GNU installantion support, please visit https://cmake.org/cmake/help/v3.0/module/GNUInstallDirs.html
include(GNUInstallDirs)

#Add vendor information and release version
set(${CMAKE_PROJECT_NAME}_SUMMARY              "CMake base project for TDD")
set(${CMAKE_PROJECT_NAME}_VENDOR_NAME          "Caio Guedes")
set(${CMAKE_PROJECT_NAME}_VENDOR_CONTACT       "caio@assistatecnologia.com.br")
set(${CMAKE_PROJECT_NAME}_VERSION_MAJOR        0)
set(${CMAKE_PROJECT_NAME}_VERSION_MINOR        0)
set(${CMAKE_PROJECT_NAME}_VERSION_PATCH        0)
set(PROJECT_VERSION "${${CMAKE_PROJECT_NAME}_VERSION_MAJOR}.${${CMAKE_PROJECT_NAME}_VERSION_MINOR}.${${CMAKE_PROJECT_NAME}_VERSION_PATCH}")

# Set C++ version
set(CMAKE_CXX_STANDARD 11)

# Set compiler flags for GNU GCC
if(CMAKE_COMPILER_IS_GNUCXX)
    set(CMAKE_CXX_FLAGS_DEBUG   "-O0 -g3")
    set(CMAKE_CXX_FLAGS_RELEASE "-O3")
endif(CMAKE_COMPILER_IS_GNUCXX)

set(CMAKE_INSTALL_PREFIX ${PROJECT_SOURCE_DIR})

# Add subdirectiories - libs, tests...
add_subdirectory(src)
add_subdirectory(test)