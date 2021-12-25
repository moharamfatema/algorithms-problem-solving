#include <gtest/gtest.h>
#include "solution.cpp"

TEST(TestLCS,TestCorrectLength)
{
    Solution solution;
    EXPECT_EQ( solution.longestCommonSubsequence("ABCBDAB","BDCABA",false), 4);
    EXPECT_EQ( solution.longestCommonSubsequence("abcde","ace",false), 3);
}
TEST(TestLCS, TestCorrectSequence)
{
    Solution solution;
    solution.longestCommonSubsequence("ABCBDAB","BDCABA",true);
    ASSERT_EQ(solution.actualSequence, "BCBA");
    solution.longestCommonSubsequence("abcde","ace",true);
    ASSERT_EQ(solution.actualSequence, "ace");
}