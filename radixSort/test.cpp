#include <gtest/gtest.h>
#include <gmock/gmock.h>

#include <bits/stdc++.h>
#include "header.hpp"

#include "LinearTimeSorting.cpp"
#include "randQuicksort.cpp"

#define NO_TEST_CASES 5
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
    LinearTimeSorting sol;
    for(int i = 1; i <= NO_TEST_CASES; i++)
    {
        
        TestCase testCase = TestCase(pow(10,i));
        EXPECT_THAT(sol.radixSort(testCase.unsorted,Utils::noOfDigits(Utils::max(testCase.unsorted))),Eq(testCase.sorted));
    }
}

TEST(test_quick_sort,test_correctness)
{
    Quicksort sol;
    for(int i = 1; i <= NO_TEST_CASES; i++)
    {
        TestCase testCase = TestCase(pow(10,i));
        EXPECT_THAT(sol.sortArray(testCase.unsorted),Eq(testCase.sorted));
    }
}