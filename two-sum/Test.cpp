#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "Solution.cpp"

using ::testing::ContainerEq;
using ::testing::IsSupersetOf;

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
    }

    void bruteForce()
    {
        EXPECT_THAT(sol.twoSumBruteForce(nums, target), ContainerEq(correct));
    }
    void hashmap()
    {
        auto solution = sol.twoSumHash(nums, target);
        EXPECT_EQ(solution.size(), 2);
        EXPECT_THAT(solution, IsSupersetOf(correct));
    }
    
    static std::vector<TestCase> initialize()
    {
        std::vector<TestCase> testCases;
        testCases.push_back(TestCase({2, 7, 11, 15}, {0, 1}, 9));
        testCases.push_back(TestCase({3, 2, 4}, {1, 2}, 6));
        testCases.push_back(TestCase({3, 3}, {0, 1}, 6));
        return testCases;
    }
};

TEST(two_sum, two_sum_brute_force_correctnes)
{
    auto testCases = TestCase::initialize();

    for (TestCase i : testCases)
        i.bruteForce();
}
TEST(two_sum, two_sum_hashmap_correctnes)
{
    auto testCases = TestCase::initialize();

    for (TestCase i : testCases)
        i.hashmap();
}