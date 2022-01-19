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

enable_testing()

include_directories("./includes")
include_directories("../app/includes")

FILE(GLOB mainSources *.cpp)
FILE(GLOB cppSources cpp/*.cpp)
FILE(GLOB appSources ../app/cpp/*.cpp)

add_executable (classes
        ${mainSources}
        ${cppSources}
        ${appSources}
)

target_include_directories(classes PUBLIC
        "${PROJECT_SOURCE_DIR}/includes")
        

target_link_libraries(classes Catch2::Catch2WithMain)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
