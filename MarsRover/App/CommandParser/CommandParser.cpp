#include "CommandParser.h"
#include <algorithm>

namespace Rover
{
    CommandParser::CommandParser()
    {

    }

    bool CommandParser::ExecuteCommand(RoverControllerInterface& rover, const std::string& command)
    {
        std::string commandCopy = command;
        transform(commandCopy.begin(), commandCopy.end(), commandCopy.begin(), ::tolower);
        for (auto c : commandCopy)
        {
            if(c == 'm')
            {
                rover.MoveForward();
            }
            else if (c == 'l')
            {
                rover.TurnLeft();
            }
            else if (c == 'r')
            {
                rover.TurnRight();
            }
            else
            {
                // TODO: need useful error. Possibly throw exception
                return false;
            }
        }
        return true;
    }
}