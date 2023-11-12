#include "FizzBuzz.h"

FizzBuzz::FizzBuzz()
{
    FizzMatcherFunction = nullptr;
    BuzzMatcherFunction = nullptr;
}

int FizzBuzz::SetFizzMatcher(bool (*fizzMatcher)(const int))
{
    FizzMatcherFunction = fizzMatcher;
    return 0;
}

int FizzBuzz::SetBuzzMatcher(bool (*buzzMatcher)(const int))
{
    BuzzMatcherFunction = buzzMatcher;
    return 0;
}

std::vector<std::string> FizzBuzz::Run(const int lowerLimit, const int upperLimit)
{
    std::vector<std::string> result = {};

    if(lowerLimit > 0)
    {
        result = FizzBuzzLoop(lowerLimit, upperLimit);
    }

    return result;
}

std::vector<std::string> FizzBuzz::FizzBuzzLoop(const int lowerLimit, const int upperLimit)
{
    std::vector<std::string> result = {};

    for(int i = lowerLimit; i <= upperLimit; ++i)
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
    if(FizzMatcherFunction != nullptr)
    {
        if(FizzMatcherFunction(value))
        {
            numberString.append(FizzString);
        }
    }
    else
    {
        if(DefaultFizzMatcher(value))
        {
            numberString.append(FizzString);
        }
    }
    return 0;
}

int FizzBuzz::AddBuzzIfNeeded(std::string& numberString, const int value)
{
    if(BuzzMatcherFunction != nullptr)
    {
        if(BuzzMatcherFunction(value))
        {
            numberString.append(BuzzString);
        }
    }
    else
    {
        if(DefaultBuzzMatcher(value))
        {
            numberString.append(BuzzString);
        }
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

bool FizzBuzz::DefaultFizzMatcher(const int testValue)
{
    return testValue % DefaultFizzValue == 0;
}

bool FizzBuzz::DefaultBuzzMatcher(const int testValue)
{
    return testValue % DefaultBuzzValue == 0;
}
