#include "solution.cpp"
#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include <random>
#define NO_TEST_CASES 1
using ::testing::Eq;

class TestCase
{
    public:
    int n;
    std::vector<int> unsorted , sorted;
    TestCase(int size) : n(size)
    { 
        unsorted = gen();
        sorted = unsorted;
        std::sort(sorted.begin(), sorted.end());
    }
    std::vector<int> gen()
    {
        std::vector<int> arr;
        for(int i = 0; i < n; i++)
            arr.push_back(rand());
        return arr;
    }
};

TEST(test_radix_sort,test_correctness)
{
    Solution sol;
    for(int i = 1; i <= NO_TEST_CASES; i++)
    {
        
        TestCase testCase = TestCase(pow(10,5));
        EXPECT_THAT(sol.sortArray(testCase.unsorted),Eq(testCase.sorted));
    }
}
