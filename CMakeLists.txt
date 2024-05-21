cmake_minimum_required(VERSION 3.28)
project(C__)

set(CMAKE_CXX_STANDARD 17)

add_executable(C__ main.cpp
        OOP/car_class/Car.cpp
        OOP/car_class/Car.h
        OOP/rectangle_class/rectangle.cpp
        OOP/rectangle_class/rectangle.h
        OOP/calculator/Calculator.cpp
        OOP/counter/Counter.cpp
        OOP/counter/Counter.h
        OOP/inheritance/inheritance.cpp
        OOP/inheritance/inheritance.h
        revision/revision.cpp
)
