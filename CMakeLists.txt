cmake_minimum_required(VERSION 3.5)
project(client)

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${client_SOURCE_DIR}/cmake")

find_package(SDL2 REQUIRED)
find_package(SDL2_Image REQUIRED)
find_package(SDL2_ttf REQUIRED)

include_directories(${SDL2_INCLUDE_DIR}
        ${SDL2_IMAGE_INCLUDE_DIR}
        ${SDL2_TTF_INCLUDE_DIR})
link_libraries(${SDL2_LIBRARY}
        ${SDL2_IMAGE_LIBRARIES}
        ${SDL2_TTF_LIBRARIES})

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c99")

file(GLOB BOMBERMAN_SRC
     Bomberman/*.h
     Bomberman/*.c
     )

set(SOURCE_FILES ${BOMBERMAN_SRC})

add_executable(client ${SOURCE_FILES})