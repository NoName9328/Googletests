#pragma once

#include "abstrasctvehicle.h"

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

enum class Weather
{
    Storm,
    Hurricane,
    Rain,
    Snowfall
};


class DeliveryCompany
{
public:
    DeliveryCompany();
    std::string createDeliveryRequest(Location from, Location to);

private:
    std::string convertingLocationToString(Location location);

private:
    Location _to;
    Location _from;
    Weather _weather;
    AbstrasctVehicle _vehicle;
};

