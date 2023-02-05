#pragma once

class IVehicle
{
public:
    IVehicle();
    virtual void startMoving() = 0;
    virtual bool isLandVehicle() = 0;
    virtual bool isWaterVehicle() = 0;
    virtual bool isFlyingМehicle() = 0;
};

