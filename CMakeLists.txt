cmake_minimum_required(VERSION 3.0.0)
project(classes VERSION 0.1.0)

set(CMAKE_CXX_STANDARD 11)

Include(FetchContent)

FetchContent_Declare(
        Catch2
        GIT_REPOSITORY https://github.com/catchorg/Catch2.git
        GIT_TAG v3.0.0-preview3
)
FetchContent_MakeAvailable(Catch2)


include(CTest)
add_test(NAME unit COMMAND classes -u)

enable_testing()

include_directories("./includes")

FILE(GLOB mainSources *.cpp)
FILE(GLOB cppSources cpp/*.cpp)

add_executable (classes
        ${mainSources}
        ${cppSources}
)

target_include_directories(classes PUBLIC
        "${PROJECT_SOURCE_DIR}/includes")
        

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
