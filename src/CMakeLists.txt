# Define an executable
add_executable(${CMAKE_PROJECT_NAME} main.cpp)

# Set libs to be compiled
add_subdirectory(libcomm)

# Link the libraries
target_link_libraries(${CMAKE_PROJECT_NAME} libcomm)