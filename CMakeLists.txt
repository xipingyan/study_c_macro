cmake_minimum_required(VERSION 3.18)

SET(TARGET_NAME test_macro)

project(${TARGET_NAME})

AUX_SOURCE_DIRECTORY(${CMAKE_CURRENT_SOURCE_DIR} SRC_FILES)

FILE(GLOB_RECURSE HEADER_FILES  *.h *.hpp)
SOURCE_GROUP("Include" FILES ${HEADER_FILES})

add_executable(${TARGET_NAME}
    ${HEADER_FILES}
    ${SRC_FILES}
)

# target_link_libraries(${TARGET_NAME})
