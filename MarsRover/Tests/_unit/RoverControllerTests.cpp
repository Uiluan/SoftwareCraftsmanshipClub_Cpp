#include <RoverController/RoverController.h>
#include <gmock/gmock.h>

using namespace testing;

TEST(RoverControllerTest, MovementCommandTestOne)
{
    Rover::RoverController TestController;
    EXPECT_THAT(TestController.GetLocation(), Eq(Rover::Coordinate(0, 0)));
    EXPECT_THAT(TestController.GetDirection(), Eq(Rover::Direction::North));

    EXPECT_THAT(TestController.Forward(), Eq(Rover::Coordinate(0, 1)));
    EXPECT_THAT(TestController.Forward(), Eq(Rover::Coordinate(0, 2)));
    EXPECT_THAT(TestController.Forward(), Eq(Rover::Coordinate(0, 3)));
    EXPECT_THAT(static_cast<int>(TestController.TurnRight()), Eq(static_cast<int>(Rover::Direction::East)));
    EXPECT_THAT(TestController.Forward(), Eq(Rover::Coordinate(1, 3)));
    EXPECT_THAT(TestController.Forward(), Eq(Rover::Coordinate(2, 3)));
    EXPECT_THAT(static_cast<int>(TestController.TurnRight()), Eq(static_cast<int>(Rover::Direction::South)));
    EXPECT_THAT(TestController.Forward(), Eq(Rover::Coordinate(2, 2)));
    EXPECT_THAT(static_cast<int>(TestController.TurnRight()), Eq(static_cast<int>(Rover::Direction::West)));
    EXPECT_THAT(TestController.Forward(), Eq(Rover::Coordinate(1, 2)));
    EXPECT_THAT(static_cast<int>(TestController.TurnRight()), Eq(static_cast<int>(Rover::Direction::North)));
    EXPECT_THAT(TestController.Forward(), Eq(Rover::Coordinate(1, 3)));
}

TEST(RoverControllerTest, MovementCommandTestTwo)
{
    Rover::RoverController TestController;
    EXPECT_THAT(TestController.GetLocation(), Eq(Rover::Coordinate(0, 0)));
    EXPECT_THAT(TestController.GetDirection(), Eq(Rover::Direction::North));

    EXPECT_THAT(TestController.Forward(), Eq(Rover::Coordinate(0, 1)));
    EXPECT_THAT(TestController.Forward(), Eq(Rover::Coordinate(0, 2)));
    EXPECT_THAT(TestController.Forward(), Eq(Rover::Coordinate(0, 3)));
    EXPECT_THAT(static_cast<int>(TestController.TurnLeft()), Eq(static_cast<int>(Rover::Direction::West)));
    EXPECT_THAT(TestController.Forward(), Eq(Rover::Coordinate(9, 3)));
    EXPECT_THAT(TestController.Forward(), Eq(Rover::Coordinate(8, 3)));
    EXPECT_THAT(static_cast<int>(TestController.TurnLeft()), Eq(static_cast<int>(Rover::Direction::South)));
    EXPECT_THAT(TestController.Forward(), Eq(Rover::Coordinate(8, 2)));
    EXPECT_THAT(static_cast<int>(TestController.TurnLeft()), Eq(static_cast<int>(Rover::Direction::East)));
    EXPECT_THAT(TestController.Forward(), Eq(Rover::Coordinate(9, 2)));
    EXPECT_THAT(static_cast<int>(TestController.TurnLeft()), Eq(static_cast<int>(Rover::Direction::North)));
    EXPECT_THAT(TestController.Forward(), Eq(Rover::Coordinate(9, 3)));
}

TEST(RoverControllerTest, MovementCommandTestThree)
{
    Rover::RoverController TestController;
    EXPECT_THAT(TestController.GetLocation(), Eq(Rover::Coordinate(0, 0)));
    EXPECT_THAT(TestController.GetDirection(), Eq(Rover::Direction::North));

    EXPECT_THAT(TestController.Forward(), Eq(Rover::Coordinate(0, 1)));
    EXPECT_THAT(TestController.Forward(), Eq(Rover::Coordinate(0, 2)));
    EXPECT_THAT(TestController.Forward(), Eq(Rover::Coordinate(0, 3)));
    EXPECT_THAT(TestController.Forward(), Eq(Rover::Coordinate(0, 4)));
    EXPECT_THAT(TestController.Forward(), Eq(Rover::Coordinate(0, 5)));
    EXPECT_THAT(TestController.Forward(), Eq(Rover::Coordinate(0, 6)));
    EXPECT_THAT(TestController.Forward(), Eq(Rover::Coordinate(0, 7)));
    EXPECT_THAT(TestController.Forward(), Eq(Rover::Coordinate(0, 8)));
    EXPECT_THAT(TestController.Forward(), Eq(Rover::Coordinate(0, 9)));
    EXPECT_THAT(TestController.Forward(), Eq(Rover::Coordinate(0, 0)));
}

TEST(RoverControllerTest, MovementCommandTestFour)
{
    Rover::RoverController TestController;
    EXPECT_THAT(TestController.GetLocation(), Eq(Rover::Coordinate(0, 0)));
    EXPECT_THAT(TestController.GetDirection(), Eq(Rover::Direction::North));

    EXPECT_THAT(static_cast<int>(TestController.TurnRight()), Eq(static_cast<int>(Rover::Direction::East)));
    EXPECT_THAT(TestController.Forward(), Eq(Rover::Coordinate(1, 0)));
    EXPECT_THAT(TestController.Forward(), Eq(Rover::Coordinate(2, 0)));
    EXPECT_THAT(TestController.Forward(), Eq(Rover::Coordinate(3, 0)));
    EXPECT_THAT(TestController.Forward(), Eq(Rover::Coordinate(4, 0)));
    EXPECT_THAT(TestController.Forward(), Eq(Rover::Coordinate(5, 0)));
    EXPECT_THAT(TestController.Forward(), Eq(Rover::Coordinate(6, 0)));
    EXPECT_THAT(TestController.Forward(), Eq(Rover::Coordinate(7, 0)));
    EXPECT_THAT(TestController.Forward(), Eq(Rover::Coordinate(8, 0)));
    EXPECT_THAT(TestController.Forward(), Eq(Rover::Coordinate(9, 0)));
    EXPECT_THAT(TestController.Forward(), Eq(Rover::Coordinate(0, 0)));
}

TEST(RoverControllerTest, MovementCommandTestFive)
{
    Rover::RoverController TestController;
    EXPECT_THAT(TestController.GetLocation(), Eq(Rover::Coordinate(0, 0)));
    EXPECT_THAT(TestController.GetDirection(), Eq(Rover::Direction::North));

    EXPECT_THAT(static_cast<int>(TestController.TurnRight()), Eq(static_cast<int>(Rover::Direction::East)));
    EXPECT_THAT(static_cast<int>(TestController.TurnRight()), Eq(static_cast<int>(Rover::Direction::South)));
    EXPECT_THAT(TestController.Forward(), Eq(Rover::Coordinate(0, 9)));
}