file(GLOB  test_files  ./test_*.cpp)
include_directories(
  ${CATCH2_INCLUDE}
  )
add_executable(apptest  ${test_files})
