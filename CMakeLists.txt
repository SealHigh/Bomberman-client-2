cmake_minimum_required(VERSION 3.5)
project(client)

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${client_SOURCE_DIR}/cmake")

include_directories(${SDL2_INCLUDE_DIR}
        ${SDL2_IMAGE_INCLUDE_DIR}
        ${SDL2_TTF_INCLUDE_DIR})
link_libraries(${SDL2_LIBRARY}
        ${SDL2_IMAGE_LIBRARIES}
        ${SDL2_TTF_LIBRARIES})

set("-std=c99")

file(GLOB BOMBERMAN_SRC
     Bomberman/*.h
     Bomberman/*.c
        Bomberman/*.png

     Bomberman/player/*.h
     Bomberman/player/*.c

     Bomberman/player/handlers/*.h
     Bomberman/player/handlers/*.c

     Bomberman/level/levels/*.h
     Bomberman/level/levels/*.c

     Bomberman/level/handlers/*.h
     Bomberman/level/handlers/*.c

     Bomberman/graphics/*.h
     Bomberman/graphics/*.c

     Bomberman/game/*.h
     Bomberman/game/*.c

     Bomberman/game/handlers/*.h
     Bomberman/game/handlers/*.c
     )

set(SOURCE_FILES ${BOMBERMAN_SRC} Bomberman/Graphics.c Bomberman/Graphics.h)

add_executable(client ${SOURCE_FILES})