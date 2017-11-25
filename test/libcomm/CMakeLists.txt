# Add test executable
add_executable(TestLibComm main.cpp)

# Link out test suite with Google mock and test
target_link_libraries(TestLibComm
        libcomm
        libgtest
        libgmock
        )

# Set insallation routine
install(TARGETS TestLibComm DESTINATION bin)