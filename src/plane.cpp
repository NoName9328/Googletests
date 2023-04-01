#include "plane.h"
#include <iostream>

Plane::Plane(VehicleType vehicleTyp) : AbstractVehicle(vehicleTyp)
{

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
    return true;
}
