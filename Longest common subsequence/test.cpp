#include <gtest/gtest.h>
#include "solution.cpp"

TEST(TestLCS,TestCorrectLength)
{
    std::string x = "ABCBDAB";
    std::string y = "BDCABA";
    Solution solution;
    EXPECT_EQ( solution.longestCommonSubsequence(x,y), 4);
    EXPECT_EQ( solution.longestCommonSubsequence("abcde","ace"), 3);

}