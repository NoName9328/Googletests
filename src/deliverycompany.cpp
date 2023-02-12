#include "deliverycompany.h"

#include "ivehicle.h"

#include <iostream>

DeliveryCompany::DeliveryCompany()
{

}

std::string DeliveryCompany::createDeliveryRequest(Location from, Location to, const IVehicle *vehicle)
{
    std::string configText;
    if(from == Location::Russia || to == Location::Russia)
    {
        std::cout << "Russia is a terrorist state. We will have nothing to do with her!" << std::endl;
        return "";
    }


    return "All god";
}

std::string DeliveryCompany::convertingLocationToString(Location location)
{
    switch(location)
    {
        case Location::USA:
            return " USA ";
        case Location::Ukraine:
            return " Ukraine ";
        case Location::Russia:
            return " Shit ";
        case Location::Poland:
            return " Poland ";
        case Location::France:
            return " France ";
        case Location::Germany:
            return " Germany ";
        case Location::Japan:
            return " Japan ";
        case Location::China:
            return " China ";
        case Location::Italy:
            return " Italy ";
        default:
        {
            return " Sorry, we don't know such a country ";
        }
    }
}
