#include <string>
#include <vector>

namespace
{
    const int DefaultFizzValue = 3;
    const int DefaultBuzzValue = 5;
    const std::string FizzString = "Fizz";
    const std::string BuzzString = "Buzz";
}
class FizzBuzz
{

public:
    FizzBuzz();
    int SetFizzValue(const int FizzValue = DefaultFizzValue);
    int SetBuzzValue(const int BuzzValue = DefaultBuzzValue);
    std::vector<std::string> Run(const int LowerLimit, const int UpperLimit);

private:
    std::vector<std::string> FizzBuzzLoop(const int LowerLimit, const int UpperLimit);
    int AddFizzIfNeeded(std::string& numberString, const int i);
    int AddBuzzIfNeeded(std::string& numberString, const int i);
    int AddNumberIfNeeded(std::string& numberString, const int i);

    int StartValue;
    int EndValue;
    int FizzDivisor;
    int BuzzDivisor;
};
