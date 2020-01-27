add_library(mofish SHARED "")

file (GLOB headers ${CMAKE_CURRENT_LIST_DIR}/*.h ${CMAKE_CURRENT_LIST_DIR}/*.hpp)
file (GLOB source ${CMAKE_CURRENT_LIST_DIR}/*.cpp ${CMAKE_CURRENT_LIST_DIR}/*.c)

target_sources(
        mofish
        PRIVATE ${source}
        PUBLIC ${headers}
)

target_include_directories(
        mofish
        PUBLIC ${CMAKE_CURRENT_LIST_DIR}
)
