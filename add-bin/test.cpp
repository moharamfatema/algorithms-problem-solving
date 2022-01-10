#include "solution.cpp"
#include <vector>
#include <gtest/gtest.h>

TEST(testAddBin,testCorrectness)
{
    std::vector<std::vector<std::string>> testCases;
    testCases.push_back({"11","1","100"});
    testCases.push_back({"1010","1011","10101"});
    testCases.push_back({"0","0","0"});
    testCases.push_back({"100","110010","110110"});
    
    Solution sol;
    for(auto i : testCases)
    {
        EXPECT_EQ(sol.addBinary(i[0],i[1]),i[2]);
    }
}