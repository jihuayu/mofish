add_library(mofish "")

target_sources(
        mofish
    PRIVATE
        example.cpp
    PUBLIC
        ${CMAKE_CURRENT_LIST_DIR}/example.h
    )

target_include_directories(
        mofish
    PUBLIC
        ${CMAKE_CURRENT_LIST_DIR}
    )
