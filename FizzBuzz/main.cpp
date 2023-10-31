#include <iostream>
#include "FizzBuzz.h"

int main()
{
    FizzBuzz fizzBuzz;
    auto fizzBuzzResult = fizzBuzz.Run(1, 100);

    for(auto result : fizzBuzzResult)
    {
        std::cout << result << ", ";
    }
    return 0;
}

