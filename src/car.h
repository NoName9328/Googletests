#pragma once

#include "abstractvehicle.h"

class Car : public AbstractVehicle
{
public:
    Car(VehicleType vehicleTyp);
    virtual void startMoving() override;
    virtual bool isLandVehicle() override;
    virtual bool isWaterVehicle() override;
    virtual bool isFlyingVehicle() override;
};

