#include "ship.h"

Ship::Ship(VehicleType vehicleTyp) : AbstractVehicle(vehicleTyp)
{

}

bool Ship::isLandVehicle()
{
    return false;
}

bool Ship::isWaterVehicle()
{
    return true;
}

bool Ship::isFlyingVehicle()
{
    return false;
}



