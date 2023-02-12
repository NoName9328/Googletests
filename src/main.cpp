#include <iostream>

#include "Plane.h"
#include "deliverycompany.h"
#include "ivehicle.h"

int main()
{
    DeliveryCompany deliveryCompany;
    IVehicle *plane = new Plane;
    deliveryCompany.createDeliveryRequest(Location::Italy, Location::Ukraine, plane);
    delete plane;
    return 0;
}
