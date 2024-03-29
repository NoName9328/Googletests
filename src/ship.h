#pragma once

#include "abstractvehicle.h"

class Ship : public AbstractVehicle
{
public:
    Ship(VehicleType vehicleTyp);
    virtual bool isLandVehicle() override;
    virtual bool isWaterVehicle() override;
    virtual bool isFlyingVehicle() override;
};


