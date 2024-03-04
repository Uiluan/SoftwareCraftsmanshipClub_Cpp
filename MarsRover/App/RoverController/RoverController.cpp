#include "RoverController.h"

namespace Rover
{
    RoverController::RoverController()
        : Location(0, 0) // TODO: Allow location to be passed in (default 0,0)
        , CardinalDirection(Direction::North) // TODO: Allow direction to be passed in (default north)
        , MaxGridSize(9) // TODO: Allow grid size to be passe in (default 10 (9))
    {

    }

    Coordinate RoverController::Forward()
    {
        switch(CardinalDirection)
        {
            // TODO: Handle limited grid size and wrap around
            case Direction::North:
                (Location.second == MaxGridSize) ? Location.second = 0 : Location.second += 1;
                break;
            case Direction::East:
                (Location.first == MaxGridSize) ? Location.first = 0 : Location.first += 1;
                break;
            case Direction::South:
                (Location.second == 0) ? Location.second = MaxGridSize : Location.second -= 1;
                break;
            case Direction::West:
                (Location.first == 0) ? Location.first = MaxGridSize : Location.first -= 1;
                break;
        }
        return Location;
    }

    Direction RoverController::TurnLeft()
    {
        (CardinalDirection == Direction::North) ? CardinalDirection = Direction::West : 
            CardinalDirection = static_cast<Direction>(static_cast<int>(CardinalDirection) - 1);
        return CardinalDirection;
    }

    Direction RoverController::TurnRight()
    {
        (CardinalDirection == Direction::West) ? CardinalDirection = Direction::North :
            CardinalDirection = static_cast<Direction>(static_cast<int>(CardinalDirection) + 1);
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