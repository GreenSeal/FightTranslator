cmake_minimum_required(VERSION 3.20)
project(FightTranslator)

set(CMAKE_CXX_STANDARD 14)

include_directories(include)

add_executable(FightTranslator
        include/FightCodeGen.h
        include/FightLexer.h
        include/FightParser.h
        include/SymbolTable.h
        src/FightCodeGen.cpp
        src/FightLexer.cpp
        src/FightParser.cpp
        main.cpp)
