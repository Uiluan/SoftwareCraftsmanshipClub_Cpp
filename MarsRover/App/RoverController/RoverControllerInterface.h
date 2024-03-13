#ifndef ROVER_CONTROLLER_INTERFACE_H
#define ROVER_CONTROLLER_INTERFACE_H

#include <utility>

namespace Rover 
{
    enum class Direction
    {
        North,
        East,
        South,
        West,
        LastDirection
    };
    using Coordinate = std::pair<int, int>;

    class RoverControllerInterface 
    {
    public:
        virtual ~RoverControllerInterface() {}
        virtual Coordinate MoveForward() = 0;
        virtual Direction TurnLeft() = 0;
        virtual Direction TurnRight() = 0;
        virtual Coordinate GetLocation() = 0;
        virtual Direction GetDirection() = 0; 
    };
}

#endif