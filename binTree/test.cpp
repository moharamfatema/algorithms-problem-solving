#include "solution.cpp"
#include <gtest/gtest.h>

TEST(testUtil, testBinToInt)
{
    EXPECT_EQ(Util::binToInt("11"),3);
    EXPECT_EQ(Util::binToInt("00"),0);
    EXPECT_EQ(Util::binToInt("01"),1);
    EXPECT_EQ(Util::binToInt("10"),2);
    EXPECT_EQ(Util::binToInt("101"),5);
}
TEST(testSolution,testSum)
{
    TreeNode root(0);
    Solution sol;
    EXPECT_EQ(sol.sumRootToLeaf(&root),0);

    root = TreeNode(1,new TreeNode(0,new TreeNode(0),new TreeNode(1)),new TreeNode(1,new TreeNode(0),new TreeNode(1)));
    EXPECT_EQ(sol.sumRootToLeaf(&root),22);

}