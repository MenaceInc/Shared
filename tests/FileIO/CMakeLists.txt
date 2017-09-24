# Set gtest include directory for "gtest/gtest.h"
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

# Set source files for current directory and export to parent
set(FileIO_SRC ${CMAKE_CURRENT_SOURCE_DIR}/FileIO_tests.cpp)
set(FileIO_SRC ${FileIO_SRC} PARENT_SCOPE)


# Set source file for tests
add_executable(runAllFileIOTests ${FileIO_SRC})

# Link libraries for tests
target_link_libraries(runAllFileIOTests gtest gtest_main FileIO)

# Ensure resources folder is copied when tests are run
#add_dependencies(runAllFileIOTests ${DEPENDENCIES})
