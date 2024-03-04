#include <utility>

namespace Rover
{
    enum class Direction
    {
        North,
        East,
        South,
        West
    };

    using Coordinate = std::pair<int, int>;
    
    class RoverController
    {
        public:
            RoverController();
            Coordinate Forward();
            Direction TurnLeft();
            Direction TurnRight();
            Coordinate GetLocation();
            Direction GetDirection();
            
        private:
            Coordinate Location;
            Direction CardinalDirection;
            int MaxGridSize;
    };
}