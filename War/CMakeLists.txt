cmake_minimum_required(VERSION 3.7)
project(War)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        Card.cpp
        Card.h
        Deck.cpp
        Deck.h
        main.cpp
        Player.cpp
        Player.h
        War.cpp
        War.h)

add_executable(War ${SOURCE_FILES})