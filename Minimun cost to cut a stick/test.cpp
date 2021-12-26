#include <gtest/gtest.h>
#include "solution.cpp"

TEST(TestMinCostCut,TestCorrectCost)
{
    Solution sol;
    EXPECT_EQ(sol.minCost(7,{1,3,4,5}),16);
    EXPECT_EQ(sol.minCost(9,{5,6,1,4,2}),22);

}