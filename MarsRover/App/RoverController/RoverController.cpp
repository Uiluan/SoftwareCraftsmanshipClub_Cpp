#include "RoverController.h"
#include <algorithm>

namespace Rover
{
    RoverController::RoverController(const int x, const int y, const Direction direction, const int maxGridSize)
        : MaxGridSize(maxGridSize)
        , Location(std::min(x, MaxGridSize - 1), std::min(y, MaxGridSize - 1))
        , CardinalDirection(direction)
    {
    }

    Coordinate RoverController::MoveForward()
    {
        switch(CardinalDirection)
        {
            case Direction::North:
                Location.second = ((Location.second + MaxGridSize) + 1) % MaxGridSize;
                break;
            case Direction::East:
                Location.first = ((Location.first + MaxGridSize) + 1) % MaxGridSize;
                break;
            case Direction::South:
                Location.second = ((Location.second + MaxGridSize) - 1) % MaxGridSize;
                break;
            case Direction::West:
                Location.first = ((Location.first + MaxGridSize) - 1) % MaxGridSize;
                break;
        }
        return Location;
    }

    Direction RoverController::TurnLeft()
    {
        return static_cast<Direction>((static_cast<int>(CardinalDirection) +
            static_cast<int>(Direction::LastDirection) - 1) % static_cast<int>(Direction::LastDirection));
    }

    Direction RoverController::TurnRight()
    {
        return static_cast<Direction>((static_cast<int>(CardinalDirection) +
            static_cast<int>(Direction::LastDirection) + 1) % static_cast<int>(Direction::LastDirection));
    }

    Coordinate RoverController::GetLocation()
    {
        return Location;
    }

    Direction RoverController::GetDirection()
    {
        return CardinalDirection;
    }
}