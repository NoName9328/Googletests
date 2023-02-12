cmake_minimum_required(VERSION 3.5)

set(SOURCES
    car.cpp
    car.h
    plane.cpp
    plane.h
    ship.cpp
    ship.h
    ivehicle.h
    deliverycompany.cpp
    deliverycompany.h
    abstractvehicle.h
    abstractvehicle.cpp
    main.cpp
)


add_executable(${CMAKE_PROJECT_NAME} ${SOURCES})
