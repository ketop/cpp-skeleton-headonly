cmake_minimum_required(VERSION 3.14)
project(cpp-skeleton)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(JSON_INCLUDE     ${CMAKE_CURRENT_LIST_DIR}/third_party/json/include)
set(SPDLOG_INCLUDE   ${CMAKE_CURRENT_LIST_DIR}/third_party/spdlog/include)
set(CATCH2_INCLUDE   ${CMAKE_CURRENT_LIST_DIR}/third_party/Catch2/include)

include_directories(
  ${JSON_INCLUDE}
  ${SPDLOG_INCLUDE}
  )

set(EXECUTABLE_OUTPUT_PATH ${CMAKE_CURRENT_LIST_DIR}/bin)
set(LIBRARY_OUTPUT_PATH ${CMAKE_CURRENT_LIST_DIR}/lib)
file(GLOB  app_src_files  ${CMAKE_CURRENT_LIST_DIR}/src/*.cpp)
add_executable(app   ${app_src_files})


enable_testing()
add_subdirectory(test)
add_test(
  NAME apptest
  COMMAND  $<TARGET_FILE:apptest>
  )
