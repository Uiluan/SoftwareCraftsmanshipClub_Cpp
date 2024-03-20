#include "RoverController/RoverControllerInterface.h"
#include <string>

namespace Rover
{
    class CommandParser
    {
        public:
            CommandParser();
            bool ExecuteCommand(RoverControllerInterface& rover, const std::string& command);
    };
}