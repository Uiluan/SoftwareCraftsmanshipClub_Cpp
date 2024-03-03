#include "RoverController.h"

namespace Rover
{
    RoverController::RoverController()
        : Location(0, 0)
    {

    }

    Coordinate RoverController::Forward()
    {
        return Location;
    }

    Coordinate RoverController::TurnLeft()
    {
        return Location;
    }

    Coordinate RoverController::TurnRight()
    {
        return Location;
    }
}