
#include <iostream>
#include <sstream>
#include <stack>
#include <map>
#include <cctype>
#include "ArithmeticSolver.h"

ArithmeticSolver::ArithmeticSolver()
{
}

double ArithmeticSolver::Evaluate(std::string& expression)
{
    std::string::iterator it = expression.begin();
    return ParseEquation(it);
    return 0;
}

double ArithmeticSolver::ParseEquation(std::string::iterator& it) {
    double value = ParseTerm(it);
    while(*it == '+' || *it == '-') {
        if(*it == '+') {
            ++it; // skip '+'
            value += ParseTerm(it);
        } else {
            ++it; // skip '-'
            value -= ParseTerm(it);
        }
    }
    return value;
}

double ArithmeticSolver::ParseTerm(std::string::iterator& it) {
    double value = ParseFactor(it);
    while(*it == '*' || *it == '/') {
        if(*it == '*') {
            ++it; // skip '*'
            value *= ParseFactor(it);
        } else {
            ++it; // skip '/'
            value /= ParseFactor(it);
        }
    }
    return value;
}

double ArithmeticSolver::ParseFactor(std::string::iterator& it) {
    if(*it == '(' || *it == ' ') {
        ++it; // skip '(' and ' '
        if (*it == ')') {
            ++it; // skip ')'
            return 0;
        }
        double value = ParseEquation(it);
        ++it; // skip ')'
        return value;
    }
    return ParseNumber(it);
}

double ArithmeticSolver::ParseNumber(std::string::iterator& it) {
    std::string number;
    while(std::isdigit(*it)) {
        number += *it;
        ++it;
    }
    return std::stod(number);
    // TODO: Maybe do this for next chapter? (I added this to debug)
    //     try {
    //     return std::stod(number);
    // } catch (std::invalid_argument&) {
    //     std::cerr << "Invalid number: " << number << std::endl;
    //     return 0;
    // }
}



