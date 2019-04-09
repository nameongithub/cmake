cmake_minimum_required(VERSION 2.8.9)
project(project_name)

aux_source_directory(src/libsrc LIBSRC_LIST)
add_library(library_name STATIC ${LIBSRC_LIST})
target_include_directories(library_name PUBLIC include/libinclude ) #這並不包括子目錄。
set(LIBRARY_OUTPUT_PATH ${CMAKE_BINARY_DIR}/lib)

aux_source_directory(src SRC_LIST)#這並不包括src的子目錄。
add_executable(executable_name ${SRC_LIST})
target_include_directories(executable_name PRIVATE include)
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR}/bin)

target_link_libraries(executable_name library_name)

target_include_directories(executable_name PRIVATE lib/include)
find_library(LIB_DIR NAMES divandmod subandmulti PATHS lib)
message("LIBDIR${LIB_DIR}")
find_library(LIB2 divandmod lib)
message("LIB2${LIB2}")
target_link_libraries(executable_name ${LIB_DIR})
