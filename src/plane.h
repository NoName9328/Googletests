#pragma once

#include "abstractvehicle.h"

class Plane : public AbstractVehicle
{
public:
    Plane();
    void startMoving() override;
    bool isLandVehicle() override;
    bool isWaterVehicle() override;
    bool isFlyingVehicle() override;
};


