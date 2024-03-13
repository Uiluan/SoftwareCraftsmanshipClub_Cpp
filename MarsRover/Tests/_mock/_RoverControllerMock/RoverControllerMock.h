#ifndef ROVERCONTROLLERMOCK_H
#define ROVERCONTROLLERMOCK_H

#include "RoverController/RoverControllerInterface.h"
#include <gmock/gmock.h>

class RoverControllerMock : public Rover::RoverControllerInterface 
{
public:
    MOCK_METHOD(Rover::Coordinate, MoveForward, (), (override));
    MOCK_METHOD(Rover::Direction, TurnLeft, ());
    MOCK_METHOD(Rover::Direction, TurnRight, ());
    MOCK_METHOD(Rover::Coordinate, GetLocation, ());
    MOCK_METHOD(Rover::Direction, GetDirection, ());
};

#endif