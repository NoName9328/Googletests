#pragma once

#include "abstractvehicle.h"

class Ship : public AbstractVehicle
{
public:
    Ship();
    virtual void startMoving() override;
    virtual bool isLandVehicle() override;
    virtual bool isWaterVehicle() override;
    virtual bool isFlyingVehicle() override;
};


