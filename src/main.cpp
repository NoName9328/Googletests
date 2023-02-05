#include <iostream>

#include "deliverycompany.h"

int main()
{
    DeliveryCompany deliveryCompany;
    deliveryCompany.createDeliveryRequest(Location::Italy,Location::Ukraine);
    return 0;
}
