#include <RoverController/RoverController.h>
#include <gmock/gmock.h>

using namespace testing;
using namespace Rover;

TEST(RoverControllerTest, GivenStartx0y0NorthWhenMoveForwardThenReturnx0y1North)
{
    RoverController TestController;
    ASSERT_THAT(TestController.GetLocation(), Eq(Coordinate(0, 0)));
    ASSERT_THAT(TestController.GetDirection(), Eq(Direction::North));

    EXPECT_THAT(TestController.MoveForward(), Eq(Coordinate(0, 1)));
    EXPECT_THAT(TestController.GetDirection(), Eq(Direction::North));
}

TEST(RoverControllerTest, GivenStartx5y5NorthWhenMoveForwardThenReturnx5y6North)
{
    RoverController TestController(5, 5);
    ASSERT_THAT(TestController.GetLocation(), Eq(Coordinate(5, 5)));
    ASSERT_THAT(TestController.GetDirection(), Eq(Direction::North));

    EXPECT_THAT(TestController.MoveForward(), Eq(Coordinate(5, 6)));
    EXPECT_THAT(TestController.GetDirection(), Eq(Direction::North));
}

TEST(RoverControllerTest, GivenStartx3y9NorthWhenMoveForwardThenReturnx3y0)
{
    RoverController TestController(3, 9);
    ASSERT_THAT(TestController.GetLocation(), Eq(Coordinate(3, 9)));
    ASSERT_THAT(TestController.GetDirection(), Eq(Direction::North));

    EXPECT_THAT(TestController.MoveForward(), Eq(Coordinate(3, 0)));
    EXPECT_THAT(TestController.GetDirection(), Eq(Direction::North));
}

TEST(RoverControllerTest, GivenStartx13y21NorthMaxGrid15WhenMoveForwardThenReturnx13y0)
{
    RoverController TestController(13, 21, Direction::North, 15);
    ASSERT_THAT(TestController.GetLocation(), Eq(Coordinate(13, 14)));
    ASSERT_THAT(TestController.GetDirection(), Eq(Direction::North));

    EXPECT_THAT(TestController.MoveForward(), Eq(Coordinate(13, 0)));
    EXPECT_THAT(TestController.GetDirection(), Eq(Direction::North));
}

TEST(RoverControllerTest, GivenStartx0y0EastWhenMoveForwardThenReturnx1y0East)
{
    RoverController TestController(0, 0, Direction::East);
    ASSERT_THAT(TestController.GetLocation(), Eq(Coordinate(0, 0)));
    ASSERT_THAT(TestController.GetDirection(), Eq(Direction::East));

    EXPECT_THAT(TestController.MoveForward(), Eq(Coordinate(1, 0)));
    EXPECT_THAT(TestController.GetDirection(), Eq(Direction::East));
}

TEST(RoverControllerTest, GivenStartx5y5EastWhenMoveForwardThenReturnx6y5NEast)
{
    RoverController TestController(5, 5, Direction::East);
    ASSERT_THAT(TestController.GetLocation(), Eq(Coordinate(5, 5)));
    ASSERT_THAT(TestController.GetDirection(), Eq(Direction::East));

    EXPECT_THAT(TestController.MoveForward(), Eq(Coordinate(6, 5)));
    EXPECT_THAT(TestController.GetDirection(), Eq(Direction::East));
}

TEST(RoverControllerTest, GivenStartx9y2EastWhenMoveForwardThenReturnx0y2East)
{
    RoverController TestController(9, 2, Direction::East);
    ASSERT_THAT(TestController.GetLocation(), Eq(Coordinate(9, 2)));
    ASSERT_THAT(TestController.GetDirection(), Eq(Direction::East));

    EXPECT_THAT(TestController.MoveForward(), Eq(Coordinate(0, 2)));
    EXPECT_THAT(TestController.GetDirection(), Eq(Direction::East));
}

TEST(RoverControllerTest, GivenStartx24y10EastMaxGrid15WhenMoveForwardThenReturnx0y10East)
{
    RoverController TestController(24, 10, Direction::East, 15);
    ASSERT_THAT(TestController.GetLocation(), Eq(Coordinate(14, 10)));
    ASSERT_THAT(TestController.GetDirection(), Eq(Direction::East));

    EXPECT_THAT(TestController.MoveForward(), Eq(Coordinate(0, 10)));
    EXPECT_THAT(TestController.GetDirection(), Eq(Direction::East));
}

TEST(RoverControllerTest, GivenStartx0y0WestWhenMoveForwardThenReturnx9y0West)
{
    RoverController TestController(0, 0, Direction::West);
    ASSERT_THAT(TestController.GetLocation(), Eq(Coordinate(0, 0)));
    ASSERT_THAT(TestController.GetDirection(), Eq(Direction::West));

    EXPECT_THAT(TestController.MoveForward(), Eq(Coordinate(9, 0)));
    EXPECT_THAT(TestController.GetDirection(), Eq(Direction::West));
}

TEST(RoverControllerTest, GivenStartx5y5WestWhenMoveForwardThenReturnx4y5NWest)
{
    RoverController TestController(5, 5, Direction::West);
    ASSERT_THAT(TestController.GetLocation(), Eq(Coordinate(5, 5)));
    ASSERT_THAT(TestController.GetDirection(), Eq(Direction::West));

    EXPECT_THAT(TestController.MoveForward(), Eq(Coordinate(4, 5)));
    EXPECT_THAT(TestController.GetDirection(), Eq(Direction::West));
}

TEST(RoverControllerTest, GivenStartx0y7WestWhenMoveForwardThenReturnx9y7West)
{
    RoverController TestController(0, 7, Direction::West);
    ASSERT_THAT(TestController.GetLocation(), Eq(Coordinate(0, 7)));
    ASSERT_THAT(TestController.GetDirection(), Eq(Direction::West));

    EXPECT_THAT(TestController.MoveForward(), Eq(Coordinate(9, 7)));
    EXPECT_THAT(TestController.GetDirection(), Eq(Direction::West));
}

TEST(RoverControllerTest, GivenStartx43y4WestMaxGrid20WhenMoveForwardThenReturnx18y4West)
{
    RoverController TestController(43, 4, Direction::West, 20);
    ASSERT_THAT(TestController.GetLocation(), Eq(Coordinate(19, 4)));
    ASSERT_THAT(TestController.GetDirection(), Eq(Direction::West));

    EXPECT_THAT(TestController.MoveForward(), Eq(Coordinate(18, 4)));
    EXPECT_THAT(TestController.GetDirection(), Eq(Direction::West));
}

TEST(RoverControllerTest, GivenStartx0y0SouthWhenMoveForwardThenReturnx0y9South)
{
    RoverController TestController(0, 0, Direction::South);
    ASSERT_THAT(TestController.GetLocation(), Eq(Coordinate(0, 0)));
    ASSERT_THAT(TestController.GetDirection(), Eq(Direction::South));

    EXPECT_THAT(TestController.MoveForward(), Eq(Coordinate(0, 9)));
    EXPECT_THAT(TestController.GetDirection(), Eq(Direction::South));
}

TEST(RoverControllerTest, GivenStartx5y5SouthWhenMoveForwardThenReturnx5y4South)
{
    RoverController TestController(5, 5, Direction::South);
    ASSERT_THAT(TestController.GetLocation(), Eq(Coordinate(5, 5)));
    ASSERT_THAT(TestController.GetDirection(), Eq(Direction::South));

    EXPECT_THAT(TestController.MoveForward(), Eq(Coordinate(5, 4)));
    EXPECT_THAT(TestController.GetDirection(), Eq(Direction::South));
}

TEST(RoverControllerTest, GivenStartx3y9SouthWhenMoveForwardThenReturnx3y8South)
{
    RoverController TestController(3, 9, Direction::South);
    ASSERT_THAT(TestController.GetLocation(), Eq(Coordinate(3, 9)));
    ASSERT_THAT(TestController.GetDirection(), Eq(Direction::South));

    EXPECT_THAT(TestController.MoveForward(), Eq(Coordinate(3, 8)));
    EXPECT_THAT(TestController.GetDirection(), Eq(Direction::South));
}

TEST(RoverControllerTest, GivenStartx6y74SouthMaxGrid43WhenMoveForwardThenReturnx6y42)
{
    RoverController TestController(6, 74, Direction::South, 43);
    ASSERT_THAT(TestController.GetLocation(), Eq(Coordinate(6, 42)));
    ASSERT_THAT(TestController.GetDirection(), Eq(Direction::South));

    EXPECT_THAT(TestController.MoveForward(), Eq(Coordinate(6, 41)));
    EXPECT_THAT(TestController.GetDirection(), Eq(Direction::South));
}

TEST(RoverControllerTest, GivenNorthGivenTurnRightThenEast)
{
    RoverController TestController;
    ASSERT_THAT(TestController.GetDirection(), Eq(Direction::North));

    EXPECT_THAT(TestController.TurnRight(), Eq(Direction::East));
}

TEST(RoverControllerTest, GivenEastGivenTurnRightThenSouth)
{
    RoverController TestController(3, 3, Direction::East);
    ASSERT_THAT(TestController.GetDirection(), Eq(Direction::East));

    EXPECT_THAT(TestController.TurnRight(), Eq(Direction::South));
}

TEST(RoverControllerTest, GivenSouthGivenTurnRightThenWest)
{
    RoverController TestController(2, 8, Direction::South);
    ASSERT_THAT(TestController.GetDirection(), Eq(Direction::South));

    EXPECT_THAT(TestController.TurnRight(), Eq(Direction::West));
}

TEST(RoverControllerTest, GivenWestGivenTurnRightThenNorth)
{
    RoverController TestController(4, 7, Direction::West);
    ASSERT_THAT(TestController.GetDirection(), Eq(Direction::West));

    EXPECT_THAT(TestController.TurnRight(), Eq(Direction::North));
}

TEST(RoverControllerTest, GivenNorthGivenTurnLeftThenWest)
{
    RoverController TestController;
    ASSERT_THAT(TestController.GetDirection(), Eq(Direction::North));

    EXPECT_THAT(TestController.TurnLeft(), Eq(Direction::West));
}

TEST(RoverControllerTest, GivenEastGivenTurnLeftThenNorth)
{
    RoverController TestController(3, 3, Direction::East);
    ASSERT_THAT(TestController.GetDirection(), Eq(Direction::East));

    EXPECT_THAT(TestController.TurnLeft(), Eq(Direction::North));
}

TEST(RoverControllerTest, GivenSouthGivenTurnLeftThenEast)
{
    RoverController TestController(2, 8, Direction::South);
    ASSERT_THAT(TestController.GetDirection(), Eq(Direction::South));

    EXPECT_THAT(TestController.TurnLeft(), Eq(Direction::East));
}

TEST(RoverControllerTest, GivenWestGivenTurnLeftThenSouth)
{
    RoverController TestController(4, 7, Direction::West);
    ASSERT_THAT(TestController.GetDirection(), Eq(Direction::West));

    EXPECT_THAT(TestController.TurnLeft(), Eq(Direction::South));
}