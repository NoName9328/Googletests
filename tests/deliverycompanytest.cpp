#include "deliverycompany.h"

#include <tuple>

#include <gtest/gtest.h>

class DeliveryCompanyTest : public ::testing::TestWithParam<std::pair<Location, std::string>>
{
  protected:
    DeliveryCompanyTest(){}
    ~DeliveryCompanyTest(){}

    DeliveryCompany m_company;
};

TEST_F(DeliveryCompanyTest, createDeliveryRequestReturnAllGood)
{
    EXPECT_EQ(m_company.createDeliveryRequest(Location::Ukraine, Location::Russia, nullptr),
              "Russia is a terrorist state. We will have nothing to do with her!");
}

TEST_F(DeliveryCompanyTest, createDeliveryRequestReturnFailed)
{
    EXPECT_EQ(m_company.createDeliveryRequest(Location::Ukraine, Location::Poland, nullptr),
              "All good");
}

//TEST_P(DeliveryCompanyTest, convertingLocationToStringTest_P)
//{
//    auto [enumValue, strValue]{ GetParam() };

//    EXPECT_EQ(m_company.convertingLocationToString(enumValue), strValue);
//}

//INSTANTIATE_TEST_SUITE_P(convertingLocationToStringTest, DeliveryCompanyTest,
//                         ::testing::Values(std::pair{ Location::USA, " USA " },
//                                           std::pair{ Location::Ukraine, " Ukraine " },
//                                           std::pair{ Location::Russia, " Shit " },
//                                           std::pair{ Location::Poland, " Poland " },
//                                           std::pair{ Location::France, " France " },
//                                           std::pair{ Location::Germany, " Germany " },
//                                           std::pair{ Location::Japan, " Japan " },
//                                           std::pair{ Location::China, " China " },
//                                           std::pair{ Location::Italy, " Italy " }));

TEST_F(DeliveryCompanyTest, calculateDeliveryTime_P)
{
//    auto [vehicleType, Weather]{ GetParam() };
    EXPECT_DOUBLE_EQ(m_company.calculateDeliveryTime(VehicleType::Car, Weather::Rain),
                     0.0);
}

//INSTANTIATE_TEST_SUITE_P(calculateDeliveryTime, DeliveryCompanyTest,
//                         ::testing::Values(VehicleType::Car, Weather::Rain,
//                                           0.0));
