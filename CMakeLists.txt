cmake_minimum_required(VERSION 3.12)

project(algo_practice_cxx)

Include(FetchContent)
FetchContent_Declare(
  Catch2
  GIT_REPOSITORY https://github.com/catchorg/Catch2.git
  GIT_TAG        v3.0.0-preview3
)
FetchContent_MakeAvailable(Catch2)

# This here builds the code in "common" as a library and exposes its headers
add_library(
  common_library
  STATIC
  ${CMAKE_SOURCE_DIR}/src/common/src/one.cpp
)
target_include_directories(
  common_library
  PUBLIC
  ${CMAKE_SOURCE_DIR}/src/common/include
)

# These "detect" the solutions and create binaries from them
file(
  GLOB
  SOLUTION_SOURCES
  RELATIVE ${CMAKE_SOURCE_DIR}
  CONFIGURE_DEPENDS
  ${CMAKE_SOURCE_DIR}/src/*.cpp
)

foreach(SOLUTION_SOURCE ${SOLUTION_SOURCES})

  get_filename_component(
    SOLUTION_BINARY
    ${SOLUTION_SOURCE}
    NAME_WE
  )

  add_executable(
    ${SOLUTION_BINARY}
    ${SOLUTION_SOURCE}
  )

  target_link_libraries(
    ${SOLUTION_BINARY}
    PRIVATE common_library
    PRIVATE Catch2::Catch2WithMain
  )

endforeach()

