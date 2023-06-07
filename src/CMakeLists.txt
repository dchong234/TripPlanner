cmake_minimum_required(VERSION 3.20)

project(TripPlanner)

add_library(simpleLibrary
    AccountHandler.cpp
    Activity.cpp
    DummyData.cpp
    Flight.cpp
    Hotel.cpp
    main.cpp
    MainMenu.cpp
    Schedule.cpp
    Trip.cpp
    TripHandler.cpp
    User.cpp
)

add_executable(TripPlanner
    AccountHandler.cpp
    Activity.cpp
    DummyData.cpp
    Flight.cpp
    Hotel.cpp
    main.cpp
    MainMenu.cpp
    Schedule.cpp
    Trip.cpp
    TripHandler.cpp
    User.cpp
)

find_library(M_LIB m)
target_link_libraries(simpleLibrary ${M_LIB})