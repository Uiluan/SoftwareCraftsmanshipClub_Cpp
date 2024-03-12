#ifndef ROVER_CONTROLLER_H
#define ROVER_CONTROLLER_H

#include "RoverControllerInterface.h"

namespace Rover
{
    class RoverController : public RoverControllerInterface
    {
        public:
            RoverController(const int x = 0,  const int y = 0, const Direction direction = Direction::North, const int maxGridSize = 10);
            Coordinate MoveForward() override;
            Direction TurnLeft() override;
            Direction TurnRight() override;
            Coordinate GetLocation() override;
            Direction GetDirection() override;
            
        private:
            int MaxGridSize;
            Coordinate Location;
            Direction CardinalDirection;
    };
}

#endif
