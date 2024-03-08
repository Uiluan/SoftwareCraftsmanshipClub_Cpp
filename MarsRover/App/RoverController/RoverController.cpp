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

    Coordinate RoverController::Forward()
    {
        switch(CardinalDirection)
        {
            case Direction::North:
                Location.second = (1 + Location.second + MaxGridSize) % MaxGridSize;
             //   (Location.second == MaxGridSize) ? Location.second = 0 : Location.second += 1;
                break;
            case Direction::East:
             //   (Location.first == MaxGridSize) ? Location.first = 0 : Location.first += 1;
                break;
            case Direction::South:
             //   (Location.second == 0) ? Location.second = MaxGridSize : Location.second -= 1;
                break;
            case Direction::West:
             //   (Location.first == 0) ? Location.first = MaxGridSize : Location.first -= 1;
                break;
        }
        return Location;
    }

    Direction RoverController::TurnLeft()
    {
       // (CardinalDirection == Direction::North) ? CardinalDirection = Direction::West : 
       //     CardinalDirection = static_cast<Direction>(static_cast<int>(CardinalDirection) - 1);
        return CardinalDirection;
    }

    Direction RoverController::TurnRight()
    {
       // (CardinalDirection == Direction::West) ? CardinalDirection = Direction::North :
       //     CardinalDirection = static_cast<Direction>(static_cast<int>(CardinalDirection) + 1);
        return CardinalDirection;
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