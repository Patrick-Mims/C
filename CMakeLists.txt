cmake_minimum_required(VERSION 3.24)

project(main)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS}")
set(SRC "src")

# disable warnings
add_definitions(-w)

find_package(json-c CONFIG)

include_directories(include)

include_directories(${PROJECT_SOURCE_DIR})

add_executable(${PROJECT_NAME} 
    ${SRC}/stackADT.c
    ${SRC}/main.c
)

target_link_libraries(${PROJECT_NAME} 
    PRIVATE json-c::json-c
    -lcurl 
    -lpthread
)
