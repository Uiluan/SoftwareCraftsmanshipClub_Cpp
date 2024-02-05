#include <iostream>
#include "ArithmeticSolver.h"

// TODO: Make work with final cases (Next chapter)?
// 3 + ( 2 * 1 ) -> Invalid record error
int main() {
    ArithmeticSolver equationSolver;
    std::string expression = "( 1 + ( ( 2 + 3 ) * (4 * 5) ) )";
    std::cout << expression << " -> " << equationSolver.Evaluate(expression) << std::endl;

    expression = "( 5 * ( 4 * ( 3 * ( 2 * ( 1 * 9 ) / 8 - 7 ) + 6 ) ) )";
    std::cout << expression << " -> " << equationSolver.Evaluate(expression) << std::endl;
    // // ((()())) -> 101
    // expression = "((()()))";
    // std::cout << evaluate(expression) << std::endl;
    return 0;
}

