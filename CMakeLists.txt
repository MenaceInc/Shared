cmake_minimum_required(VERSION 3.8)
project(Shared)

# I pity those without access to at least C++11
set(CMAKE_CXX_STANDARD 11)

# Add googletest
add_subdirectory(lib/googletest-release-1.8.0)

# Add directories for all Shared libs
add_subdirectory(FileIO)

# Add... tests I guess?
add_subdirectory(tests)

# Setup a test runner for all tests
add_executable(runAllTests ${ALL_TESTS})
target_link_libraries(runAllTests ${ALL_LIBS})
