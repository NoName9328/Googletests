#pragma once

#include "abstractvehicle.h"
#include "ivehicle.h"

#include <string>

enum class Location
{
    USA,
    Ukraine,
    Russia,
    Poland,
    France,
    Germany,
    Japan,
    China,
    Italy
};

enum class Weather : unsigned int
{
    Storm = 1,
    Hurricane = 2,
    Rain = 3,
    Snowfall = 4
};


class DeliveryCompany
{
public:
    DeliveryCompany();
    std::string convertingLocationToString(Location location);
    double calculateDeliveryTime(const VehicleType vehicle, const Weather weather);
    std::string createDeliveryRequest(Location from, Location to, const IVehicle *vehicle);

private:
    Location _to;
    Location _from;
    Weather _weather;

};

