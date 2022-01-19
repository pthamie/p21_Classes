cmake_minimum_required(VERSION 3.0.0)
project(classes VERSION 0.1.0)

set(CMAKE_CXX_STANDARD 11)

Include(FetchContent)



include_directories("./includes")

FILE(GLOB mainSources *.cpp)
FILE(GLOB cppSources cpp/*.cpp)

add_executable (classes
        ${mainSources}
        ${cppSources}
)

target_include_directories(classes PUBLIC
        "${PROJECT_SOURCE_DIR}/includes")
        

target_link_libraries(classes)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
