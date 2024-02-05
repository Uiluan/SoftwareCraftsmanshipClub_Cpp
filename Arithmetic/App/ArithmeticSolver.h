#include <string>

class ArithmeticSolver
{
public:
    ArithmeticSolver();

    double Evaluate(std::string& expression);

private:
    double ParseEquation(std::string::iterator& it);
    double ParseTerm(std::string::iterator& it);
    double ParseFactor(std::string::iterator& it);
    double ParseNumber(std::string::iterator& it);
};