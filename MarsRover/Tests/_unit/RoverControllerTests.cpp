#include <RoverController/RoverController.h>
#include <gmock/gmock.h>

using namespace testing;

TEST(RoverControllerTest, GivenStartx0y0NorthWhenForwardThenReturnx0y1North)
{
    Rover::RoverController TestController(0, 0);
    ASSERT_THAT(TestController.GetLocation(), Eq(Rover::Coordinate(0, 0)));
    ASSERT_THAT(TestController.GetDirection(), Eq(Rover::Direction::North));

    EXPECT_THAT(TestController.Forward(), Eq(Rover::Coordinate(0, 1)));
    EXPECT_THAT(TestController.GetDirection(), Eq(Rover::Direction::North));
}

TEST(RoverControllerTest, GivenStartx5y5NorthWhenForwardThenReturnx5y6North)
{
    Rover::RoverController TestController(5, 5);
    ASSERT_THAT(TestController.GetLocation(), Eq(Rover::Coordinate(5, 5)));
    ASSERT_THAT(TestController.GetDirection(), Eq(Rover::Direction::North));

    EXPECT_THAT(TestController.Forward(), Eq(Rover::Coordinate(5, 6)));
    EXPECT_THAT(TestController.GetDirection(), Eq(Rover::Direction::North));
}

TEST(RoverControllerTest, GivenStartx3y9WhenForwardThenReturnx3y0)
{
    Rover::RoverController TestController(3, 9);
    ASSERT_THAT(TestController.GetLocation(), Eq(Rover::Coordinate(3, 9)));
    ASSERT_THAT(TestController.GetDirection(), Eq(Rover::Direction::North));

    EXPECT_THAT(TestController.Forward(), Eq(Rover::Coordinate(3, 0)));
    EXPECT_THAT(TestController.GetDirection(), Eq(Rover::Direction::North));
}

TEST(RoverControllerTest, GivenStartx13y21MaxGrid15WhenForwardThenReturnx13y0)
{
    Rover::RoverController TestController(13, 21, Rover::Direction::North, 15);
    ASSERT_THAT(TestController.GetLocation(), Eq(Rover::Coordinate(13, 14)));
    ASSERT_THAT(TestController.GetDirection(), Eq(Rover::Direction::North));

    EXPECT_THAT(TestController.Forward(), Eq(Rover::Coordinate(13, 0)));
    EXPECT_THAT(TestController.GetDirection(), Eq(Rover::Direction::North));
}