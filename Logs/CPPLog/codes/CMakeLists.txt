cmake_minimum_required(VERSION 3.0)
project(CPPlog)

include_directories(
    include/
)

file(GLOB PROJECT_HEADERS           include/*.hpp
                                    include/*.h
                                    )
file(GLOB PROJECT_SOURCES           src/*.cpp
                                    )

add_executable(${PROJECT_NAME} ${PROJECT_SOURCES} ${PROJECT_HEADERS}
                               )

set_target_properties(${PROJECT_NAME} PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/${PROJECT_NAME})
