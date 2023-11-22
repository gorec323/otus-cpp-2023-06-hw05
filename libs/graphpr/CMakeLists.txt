cmake_minimum_required(VERSION 3.6)

project(graphprim  LANGUAGES CXX)

add_library(${PROJECT_NAME}
    include/graphicsitem.hpp
    include/lineitem.hpp
    include/point.hpp
    include/rect.hpp
    include/ipainter.hpp
    src/graphicsitem.cpp
    src/lineitem.cpp
)

if (${BUILD_TESTING})
    add_subdirectory(tests)
endif()

target_include_directories(${PROJECT_NAME}
PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)
