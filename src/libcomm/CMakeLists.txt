# Set library information
project(libcomm VERSION 0.1 LANGUAGES CXX)

# Create the library
add_library(libcomm src/LibComm.cpp src/Socket.cpp)

target_include_directories(libcomm PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
        $<INSTALL_INTERFACE:include>
        PRIVATE src)

install(TARGETS libcomm EXPORT LibCommConfig
        ARCHIVE  DESTINATION ${CMAKE_INSTALL_LIBDIR}
        LIBRARY  DESTINATION ${CMAKE_INSTALL_LIBDIR}
        RUNTIME  DESTINATION ${CMAKE_INSTALL_BINDIR})  # This is for Windows
install(DIRECTORY include/ DESTINATION ${CMAKE_INSTALL_INCLUDEDIR})

# This makes the project importable from the install directory
# Put config file in per-project dir (name MUST match), can also
# just go into 'cmake'.
install(EXPORT LibCommConfig DESTINATION share/libcomm/cmake)

# This makes the project importable from the build directory
export(TARGETS libcomm FILE LibCommConfig.cmake)

add_test(testlibcomm libcomm)