cmake_minimum_required(VERSION 3.29)
project(Lab5)

set(CMAKE_CXX_STANDARD 20)

add_executable(Lab5 main.cpp
        Task1/Person.cpp
        Task1/Person.h
        Task1/Student.cpp
        Task1/Student.h
        Task2/Window.cpp
        Task2/Window.h
        Task2/TitledWindow.cpp
        Task2/TitledWindow.h
        Task2/ButtonWindow.cpp
        Task2/ButtonWindow.h
        "Task 3/GraduateStudent.cpp"
        "Task 3/GraduateStudent.h")
