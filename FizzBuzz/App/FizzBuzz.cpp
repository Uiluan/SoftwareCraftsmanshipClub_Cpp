#include "FizzBuzz.h"

FizzBuzz::FizzBuzz()
    : FizzDivisor(DefaultFizzValue)
    , BuzzDivisor(DefaultBuzzValue)
{
}

int FizzBuzz::SetFizzValue(const int FizzValue)
{
    FizzDivisor = FizzValue;
    return 0;
}

int FizzBuzz::SetBuzzValue(const int BuzzValue)
{
    BuzzDivisor = BuzzValue;
    return 0;
}

std::vector<std::string> FizzBuzz::Run(const int LowerLimit, const int UpperLimit)
{
    std::vector<std::string> result = {};

    if(LowerLimit > 0)
    {
        result = FizzBuzzLoop(LowerLimit, UpperLimit);
    }

    return result;
}

std::vector<std::string> FizzBuzz::FizzBuzzLoop(const int LowerLimit, const int UpperLimit)
{
    std::vector<std::string> result = {};

    for(int i = LowerLimit; i <= UpperLimit; ++i)
    {
        std::string numberString;
        AddFizzIfNeeded(numberString, i);
        AddBuzzIfNeeded(numberString, i);
        AddNumberIfNeeded(numberString, i);

        result.push_back(numberString);
    }

    return result;
}

int FizzBuzz::AddFizzIfNeeded(std::string& numberString, const int value)
{
    if(value % FizzDivisor == 0)
    {
        numberString.append(FizzString);
    }
    return 0;
}

int FizzBuzz::AddBuzzIfNeeded(std::string& numberString, const int value)
{
    if(value % BuzzDivisor == 0)
    {
        numberString.append(BuzzString);
    }
    return 0;
}

int FizzBuzz::AddNumberIfNeeded(std::string& numberString, const int value)
{
    if(numberString.empty())
    {
        numberString.append(std::to_string(value));
    }
    return 0;
}
