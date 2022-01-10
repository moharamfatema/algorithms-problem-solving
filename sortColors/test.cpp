#include "solution.cpp"
#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include <bits/stdc++.h>
#include <bits/stl_pair.h>

using testing::Eq;

TEST(testSortColors,testCorrectness)
{
    std::vector<std::pair<std::vector<int>,std::vector<int>>> testCases;
    testCases.push_back(std::make_pair(std::vector<int>({0,0,1,1,2,2}),std::vector<int>({2,0,2,1,1,0})));
    
    testCases.push_back(std::make_pair(std::vector<int>({0,1,2}),std::vector<int>({2,0,1})));
    testCases.push_back(std::make_pair(std::vector<int>({0}),std::vector<int>({0})));
    testCases.push_back(std::make_pair(std::vector<int>({0,2}),std::vector<int>({2,0})));

    Solution sol;
    for(auto i :testCases){
        sol.sortColors(i.second);
        EXPECT_THAT(i.second,Eq(i.first));
    }
}