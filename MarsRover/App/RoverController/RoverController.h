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
    
    class RoverController
    {
        public:
            RoverController(const int x = 0,  const int y = 0, const Direction direction = Direction::North, const int maxGridSize = 10);
            Coordinate Forward();
            Direction TurnLeft();
            Direction TurnRight();
            Coordinate GetLocation();
            Direction GetDirection();
            
        private:
            int MaxGridSize;
            Coordinate Location;
            Direction CardinalDirection;
    };
}