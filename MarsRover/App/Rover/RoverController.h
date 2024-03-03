#include <utility>

namespace Rover
{
    using Coordinate = std::pair<int, int>;
    class RoverController
    {
        public:
            RoverController();
            Coordinate Forward();
            Coordinate TurnLeft();
            Coordinate TurnRight();
            
        private:
            Coordinate Location;
    };
}