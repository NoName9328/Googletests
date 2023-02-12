#pragma once

class IVehicle
{
public:
    virtual ~IVehicle() = default;
    virtual void startMoving() = 0;
    virtual bool isLandVehicle() = 0;
    virtual bool isWaterVehicle() = 0;
    virtual bool isFlyingVehicle() = 0;
};

