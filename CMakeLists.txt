cmake_minimum_required(VERSION 4.3)
project(Employer)

set(CMAKE_CXX_STANDARD 20)

add_executable(Employer main.cpp
        Employe.cpp
        Employe.h
        Resposable.cpp
        Resposable.h
        Commerciaux.cpp
        Commerciaux.h
        PerEnt.cpp
        PerEnt.h)
