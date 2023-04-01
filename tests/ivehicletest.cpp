#include "car.h"
#include "ship.h"
#include "plane.h"

#include <gmock/gmock.h>

class MockVehicle : public IVehicle {
public:
    MOCK_METHOD(void, startMoving, (), (override));
    MOCK_METHOD(bool, isLandVehicle, (), (override));
    MOCK_METHOD(bool, isWaterVehicle, (), (override));
    MOCK_METHOD(bool, isFlyingVehicle, (), (override));
};

TEST(MyTest, TestVehicle) {
    MockVehicle mockVehicle;

    EXPECT_CALL(mockVehicle, isLandVehicle())
        .WillRepeatedly(testing::Return(false));
    EXPECT_CALL(mockVehicle, isWaterVehicle())
        .WillRepeatedly(testing::Return(false));
    EXPECT_CALL(mockVehicle, isFlyingVehicle())
        .WillRepeatedly(testing::Return(false));

    Car car(VehicleType::Car);
      EXPECT_TRUE(car.isLandVehicle());
      EXPECT_FALSE(car.isWaterVehicle());
      EXPECT_FALSE(car.isFlyingVehicle());

      Ship ship(VehicleType::Ship);
      EXPECT_FALSE(ship.isLandVehicle());
      EXPECT_TRUE(ship.isWaterVehicle());
      EXPECT_FALSE(ship.isFlyingVehicle());

      Plane airplane(VehicleType::Plane);
      EXPECT_FALSE(airplane.isLandVehicle());
      EXPECT_FALSE(airplane.isWaterVehicle());
      EXPECT_TRUE(airplane.isFlyingVehicle());
}
