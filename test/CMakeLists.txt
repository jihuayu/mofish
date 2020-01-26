add_executable(
    unit_tests
    example_add.cpp
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
