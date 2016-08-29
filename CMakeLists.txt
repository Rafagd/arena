cmake_minimum_required(VERSION 3.5)

project("Arena de Desafios")

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/bin)

list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_LIST_DIR}/cmake")
find_package(SFML 2 REQUIRED graphics window system)

include_directories("include")
include_directories(${SFML_INCLUDE_DIRS})

file(GLOB_RECURSE ARENA_SRC "src/*.c" "src/*.cpp")

add_executable(arena ${ARENA_SRC})
target_link_libraries(arena m ${SFML_LIBRARIES})
