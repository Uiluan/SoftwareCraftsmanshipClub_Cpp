#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "FizzBuzz.h"

using namespace testing;

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
    fizzBuzz.SetFizzValue();
    fizzBuzz.SetBuzzValue();
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

TEST(FizzBuzzTest, GivenFizz4Buzz6_WhenRunRange1To12_ThenCorrectStringReturned)
{
    std::vector<std::string> expected = {"1", "2", "3", "Fizz", "5", "Buzz", "7", "Fizz", "9", "10", "11", "FizzBuzz"};
    FizzBuzz fizzBuzz;
    fizzBuzz.SetFizzValue(4);
    fizzBuzz.SetBuzzValue(6);
    std::vector<std::string> result = fizzBuzz.Run(1, 12);
    EXPECT_THAT(result, Eq(expected));
}

TEST(FizzBuzzTest,  WhenRunRangeLowerLimitLessThan0_ThenReturnsEmptyVector)
{
    std::vector<std::string> expected = {};
    FizzBuzz fizzBuzz;
    fizzBuzz.SetFizzValue();
    fizzBuzz.SetBuzzValue();
    std::vector<std::string> result = fizzBuzz.Run(-1, 5);
    EXPECT_THAT(result, Eq(expected));
}

TEST(FizzBuzzTest,  WhenRunRangeLowerLimit0_ThenReturnsEmptyVector)
{
    std::vector<std::string> expected = {};
    FizzBuzz fizzBuzz;
    fizzBuzz.SetFizzValue();
    fizzBuzz.SetBuzzValue();
    std::vector<std::string> result = fizzBuzz.Run(0, 5);
    EXPECT_THAT(result, Eq(expected));
}
