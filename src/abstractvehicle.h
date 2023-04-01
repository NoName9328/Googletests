#pragma once

#include "ivehicle.h"

enum class VehicleType
{
  Car,
  Ship,
  Plane,
};

class AbstractVehicle : public IVehicle {
public:
  AbstractVehicle(VehicleType vehicleTyp);
  ~AbstractVehicle();

  void startMoving() override;

  const VehicleType getVehicleType() const;

private:
  int deliverySpeed{0};
  VehicleType vehicleType;
};
