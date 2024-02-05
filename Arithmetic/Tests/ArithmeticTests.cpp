#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "ArithmeticSolver.h"

TEST(ArithmeticSolverTest, TestFormulaOne_ReturnsCorrectResult)
{
    ArithmeticSolver solver;
    std::string formula = "( 1 + ( ( 2 + 3 ) * (4 * 5) ) )";

    EXPECT_EQ(101, solver.Evaluate(formula));
}

TEST(ArithmeticSolverTest, TestFormulaTwo_ReturnsCorrectResult)
{
    ArithmeticSolver solver;
    std::string formula = "( 5 * ( 4 * ( 3 * ( 2 * ( 1 * 9 ) / 8 - 7 ) + 6 ) ) )";

    EXPECT_EQ(-165, solver.Evaluate(formula));
}