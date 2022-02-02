#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "Solution.cpp"

using ::testing::ContainerEq;

class TestCase
{
    std::vector<int> nums,
        correct;
    int target;
    Solution sol;

public:
    TestCase(std::vector<int> nums, std::vector<int> correct, int target)
        : nums(nums),
          correct(correct),
          target(target)
    {
        EXPECT_THAT(sol.twoSum(nums, target), ContainerEq(correct));
    }
};

TEST(two_sum, two_sum_correctnes_Test)
{
    std::vector<TestCase> testCases;
    testCases.push_back(TestCase({2, 7, 11, 15}, {0, 1}, 9));
    testCases.push_back(TestCase({3, 2, 4}, {1, 2}, 6));
    testCases.push_back(TestCase({3, 3}, {0, 1}, 6));
}