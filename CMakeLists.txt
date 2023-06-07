cmake_minimum_required(VERSION 3.20)

project(TripPlanner)

add_executable(TripPlanner
    src/AccountHandler.cpp
    src/Activity.cpp
    src/DummyData.cpp
    src/Flight.cpp
    src/Hotel.cpp
    src/main.cpp
    src/MainMenu.cpp
    src/Schedule.cpp
    src/Trip.cpp
    src/TripHandler.cpp
    src/User.cpp
)

add_subdirectory(test)