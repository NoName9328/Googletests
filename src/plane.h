#pragma once

#include "abstractvehicle.h"

class Plane : public AbstractVehicle
{
public:
    Plane(VehicleType vehicleTyp);
    bool isLandVehicle() override;
    bool isWaterVehicle() override;
    bool isFlyingVehicle() override;
};


