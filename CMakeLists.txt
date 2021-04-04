cmake_minimum_required(VERSION 3.15.0 FATAL_ERROR)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(median CXX)

add_subdirectory (data)
add_subdirectory (helper)

enable_testing ()
add_subdirectory (test)

#set(Header_Files
#    "data/data.h"
#    "helper/helper.h"
#)
#source_group("Header Files" FILES ${Header_Files})

#set(Source_Files
#    "data/data.cpp"
#    "helper/helper.cpp"
#    "median.cpp"
#)
#source_group("Source Files" FILES ${Source_Files})

#set(ALL_FILES
#    ${Header_Files}
#    ${Source_Files}
#)

add_executable(median median.cpp)

target_link_libraries(median PUBLIC helper)
target_link_libraries(median PUBLIC data)

# add the binary tree to the search path for include files
# so that we will find TutorialConfig.h
target_include_directories(median PUBLIC
                          "${PROJECT_BINARY_DIR}"
                          "${PROJECT_SOURCE_DIR}/helper"
                          )
						  
target_include_directories(median PUBLIC
                          "${PROJECT_BINARY_DIR}"
                          "${PROJECT_SOURCE_DIR}/data"
                          )

