#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include <string>
#include "FizzBuzz.h"

using namespace testing;

bool fizzOnMultipleOfFour(const int testValue) { return testValue % 4 == 0; }
bool buzzOnMutlipleOfSix(const int testValue) { return testValue % 6 == 0; }
bool fizzOnMultipleOfOrContainsThree(const int testValue) {
    int thisNumber = testValue >= 0 ? testValue : -testValue;
    int thisDigit;
    bool found = false;
    while (thisNumber != 0)
    {
        thisDigit = thisNumber % 10;
        thisNumber = thisNumber / 10;
        if (thisDigit == 3)
        {
            found = true;
            break;
        }
    }
    return (testValue % 3 == 0) || found; }
bool buzzOnMutlipleOfOrContainsFive(const int testValue) {
    int thisNumber = testValue >= 0 ? testValue : -testValue;
    int thisDigit;
    bool found = false;
    while (thisNumber != 0)
    {
        thisDigit = thisNumber % 10;
        thisNumber = thisNumber / 10;
        if (thisDigit == 5)
        {
            found = true;
            break;
        }
    }
    return (testValue % 5 == 0) || found; }

TEST(FizzBuzzTest, GivenDefaults_WhenRunRange1To5_ThenCorrectStringReturned)
{
    std::vector<std::string> expected = {"1", "2", "Fizz", "4", "Buzz"};
    FizzBuzz fizzBuzz;
    std::vector<std::string> result = fizzBuzz.Run(1, 5);
    EXPECT_THAT(result, Eq(expected));
}

TEST(FizzBuzzTest, GivenDefaults_WhenRunRange1To10_ThenCorrectStringReturned)
{
    std::vector<std::string> expected = {"1", "2", "Fizz", "4", "Buzz", "Fizz", "7", "8", "Fizz", "Buzz"};
    FizzBuzz fizzBuzz;
    std::vector<std::string> result = fizzBuzz.Run(1, 10);
    EXPECT_THAT(result, Eq(expected));
}

TEST(FizzBuzzTest, GivenDefaults_WhenRunRange1To15_ThenCorrectStringReturned)
{
    std::vector<std::string> expected = {"1", "2", "Fizz", "4", "Buzz", "Fizz", "7", "8", "Fizz", "Buzz", "11", "Fizz", "13", "14", "FizzBuzz"};
    FizzBuzz fizzBuzz;
    std::vector<std::string> result = fizzBuzz.Run(1, 15);
    EXPECT_THAT(result, Eq(expected));
}

TEST(FizzBuzzTest, GivenFizzCustom4BuzzCustom6_WhenRunRange1To12_ThenCorrectStringReturned)
{
    std::vector<std::string> expected = {"1", "2", "3", "Fizz", "5", "Buzz", "7", "Fizz", "9", "10", "11", "FizzBuzz"};
    FizzBuzz fizzBuzz;
    fizzBuzz.SetFizzMatcher(fizzOnMultipleOfFour);
    fizzBuzz.SetBuzzMatcher(buzzOnMutlipleOfSix);
    std::vector<std::string> result = fizzBuzz.Run(1, 12);
    EXPECT_THAT(result, Eq(expected));
}

TEST(FizzBuzzTest, GivenFizzCustomMatch4_WhenRunRange1To12_ThenCorrectStringReturned)
{
    std::vector<std::string> expected = {"1", "2", "3", "Fizz", "Buzz", "6", "7", "Fizz", "9", "Buzz", "11", "Fizz"};
    FizzBuzz fizzBuzz;
    fizzBuzz.SetFizzMatcher(fizzOnMultipleOfFour);
    std::vector<std::string> result = fizzBuzz.Run(1, 12);
    EXPECT_THAT(result, Eq(expected));
}

TEST(FizzBuzzTest, GivenBuzzCustomMatch6_WhenRunRange1To12_ThenCorrectStringReturned)
{
    std::vector<std::string> expected = {"1", "2", "Fizz", "4", "5", "FizzBuzz", "7", "8", "Fizz", "10", "11", "FizzBuzz"};
    FizzBuzz fizzBuzz;
    fizzBuzz.SetBuzzMatcher(buzzOnMutlipleOfSix);
    std::vector<std::string> result = fizzBuzz.Run(1, 12);
    EXPECT_THAT(result, Eq(expected));
}

TEST(FizzBuzzTest, GivenFizzBuzzMatchOnMultipleOrContainsDigit_WhenRunRange10To20_ThenCorrectStringReturned)
{
    std::vector<std::string> expected = {"Buzz", "11", "Fizz", "Fizz", "14", "FizzBuzz", "16", "17", "Fizz", "19", "Buzz"};
    FizzBuzz fizzBuzz;
    fizzBuzz.SetFizzMatcher(fizzOnMultipleOfOrContainsThree);
    fizzBuzz.SetBuzzMatcher(buzzOnMutlipleOfOrContainsFive);
    std::vector<std::string> result = fizzBuzz.Run(10, 20);
    EXPECT_THAT(result, Eq(expected));
}

TEST(FizzBuzzTest,  WhenRunRangeLowerLimitLessThan0_ThenReturnsEmptyVector)
{
    std::vector<std::string> expected = {};
    FizzBuzz fizzBuzz;
    std::vector<std::string> result = fizzBuzz.Run(-1, 5);
    EXPECT_THAT(result, Eq(expected));
}

TEST(FizzBuzzTest,  WhenRunRangeLowerLimit0_ThenReturnsEmptyVector)
{
    std::vector<std::string> expected = {};
    FizzBuzz fizzBuzz;
    std::vector<std::string> result = fizzBuzz.Run(0, 5);
    EXPECT_THAT(result, Eq(expected));
}
