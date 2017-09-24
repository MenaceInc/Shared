project(Shared_tests)

set(ALL_LIBS gtest_main)

add_subdirectory(FileIO)
set(ALL_TESTS ${FileIO_SRC} ${ALL_TESTS})
set(ALL_LIBS FileIO ${ALL_LIBS})


# Export list of all source files and libs used for individual tests
set(ALL_LIBS ${ALL_LIBS} PARENT_SCOPE)
set(ALL_TESTS ${ALL_TESTS} PARENT_SCOPE)
