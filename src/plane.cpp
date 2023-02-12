#include "plane.h"
#include <iostream>

Plane::Plane()
{

}


void Plane::startMoving()
{
    std::cout<< "move (Fly)";
}

bool Plane::isLandVehicle()
{
    return false;
}

bool Plane::isWaterVehicle()
{
    return false;
}

bool Plane::isFlyingVehicle()
{
    return false;
}
