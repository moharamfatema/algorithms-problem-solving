#include <gtest/gtest.h>
#include "Solution.cpp"

class TestCase
{

public:
    std::vector<int> arr;
    int correct;

    TestCase(std::vector<int> arr, int correct) : arr(arr), correct(correct) {}
};

TEST(largest_rect, correctness)
{
    Solution sol;
    std::vector<TestCase> testCases;
    testCases.push_back(TestCase({2, 1, 5, 6, 2, 3}, 10));
    testCases.push_back(TestCase({2, 4}, 4));
    testCases.push_back(TestCase({6, 4, 2, 0, 3, 2, 0, 3, 1, 4, 5, 3, 2, 7, 5, 3, 0, 1, 2, 1, 3, 4, 6, 8, 1, 3}, 14));
    testCases.push_back(TestCase({9, 8, 4, 9, 2, 6, 9, 0, 5, 4, 9, 5, 3, 8, 2, 9}, 18));
    testCases.push_back(TestCase({0, 1, 2, 3, 4, 5, 6, 7, 8}, 20));
    testCases.push_back(TestCase({3, 5, 5, 2, 5, 5, 6, 6, 4, 4, 1, 1, 2, 5, 5, 6, 6, 4, 1, 3}, 24));
    testCases.push_back(TestCase({1,2,3,4,5,6,7,8,9,10,11}, 36)); //2 * 2 * 3 * 3
    /* 1) 3 min for 12 : x
    *  2) 9 min for 4  : x
    *  3) 18 min for 2 : x
    *  4) 2 min for 18 : x
    *  5) 4 min for 9  : x
    *  6) 6 min for 6  : t : {6, 5, 10}, total = 11
    */

    for (TestCase i : testCases)
    {
        EXPECT_EQ(sol.largestRectangleArea(i.arr), i.correct);
    }
}