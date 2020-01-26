file (GLOB test ${CMAKE_CURRENT_LIST_DIR}/*.cpp ${CMAKE_CURRENT_LIST_DIR}/*.c)

add_executable(
    unit_tests
    ${test}
)

link_directories(${PROJECT_BINARY_DIR}/lib)

target_link_libraries(
    unit_tests
    gtest_main
    mofish
    )

add_test(
  NAME
    unit
  COMMAND
    ${CMAKE_BINARY_DIR}/${CMAKE_INSTALL_BINDIR}/unit_tests
  )
