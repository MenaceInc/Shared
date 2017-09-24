# Define FileIO library
add_library(FileIO FileIO.cpp)

# Set the current directory as an include directory
target_include_directories(FileIO PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

# Set library version
set(FILEIO_VERSION_MAJOR 0)
set(FILEIO_VERSION_MINOR 1)
set(FILEIO_VERSION_PATCH 1)
set(FILEIO_VERSION_STRING ${FILEIO_VERSION_MAJOR}.${FILEIO_VERSION_MINOR}.${FILEIO_VERSION_PATCH})
set_target_properties(FileIO PROPERTIES VERSION ${FILEIO_VERSION_STRING} SOVERSION ${FILEIO_VERSION_MAJOR})
