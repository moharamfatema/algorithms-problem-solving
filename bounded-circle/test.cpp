#include "solution.cpp"
#include <gtest/gtest.h>

TEST(testBounded,testCorrectness)
{
    Solution sol;
    std::string instructions = "GGLLGG";
    EXPECT_TRUE(sol.isRobotBounded(instructions));
    instructions = "GG";
    EXPECT_FALSE(sol.isRobotBounded(instructions));
    instructions = "GL";
    EXPECT_TRUE(sol.isRobotBounded(instructions));
}