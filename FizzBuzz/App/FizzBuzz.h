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
    int SetFizzMatcher(bool (*fizzMatcher)(const int) = nullptr);
    int SetBuzzMatcher(bool (*buzzMatcher)(const int) = nullptr);
    std::vector<std::string> Run(const int lowerLimit, const int upperLimit);

private:
    std::vector<std::string> FizzBuzzLoop(const int lowerLimit, const int upperLimit);
    int AddFizzIfNeeded(std::string& numberString, const int i);
    int AddBuzzIfNeeded(std::string& numberString, const int i);
    int AddNumberIfNeeded(std::string& numberString, const int i);
    bool DefaultFizzMatcher(const int testValue);
    bool DefaultBuzzMatcher(const int testValue);

    int StartValue;
    int EndValue;
    bool (*FizzMatcherFunction)(const int);
    bool (*BuzzMatcherFunction)(const int);
};
