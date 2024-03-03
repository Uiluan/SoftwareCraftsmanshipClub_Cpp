#include <string>

namespace Rover
{
    class CommandParser
    {
        public:
            CommandParser();
            bool ParseCommandString(std::string& command);
    };
}