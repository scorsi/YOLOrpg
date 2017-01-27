cmake_minimum_required(VERSION 3.5.1)
project(sparkling_eyes_rpg)

set(CMAKE_CXX_STANDARD 11)

include_directories(inc/)

set(SOURCE_FILES
    src/Characters/Character.cpp
    src/Characters/ACharacteristics.cpp
    src/Game/Game.cpp
    src/Game/GameUtils.cpp
    src/main.cpp)

add_executable(sparkling_eyes_rpg ${SOURCE_FILES})