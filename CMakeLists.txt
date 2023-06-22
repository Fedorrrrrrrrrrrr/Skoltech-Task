cmake_minimum_required(VERSION 3.25)
project(TaskSkoltech)

set(CMAKE_CXX_STANDARD 17)

add_executable(TaskSkoltech main.cpp src/Figure.h src/Circle.cpp src/Circle.h src/Rectangle.cpp src/Rectangle.h src/Square.cpp src/Square.h src/Triangle.cpp src/Triangle.h src/Line.cpp src/Line.h src/HelperFigure.cpp src/HelperFigure.h)
