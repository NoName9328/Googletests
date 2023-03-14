#include "car.h"

Car::Car(VehicleType vehicleTyp) : AbstractVehicle(vehicleTyp)
{
}

void Car::startMoving()
{

}

bool Car::isLandVehicle()
{
    return true;
}

bool Car::isWaterVehicle()
{
    return false;
}

bool Car::isFlyingVehicle()
{
    return false;
}


