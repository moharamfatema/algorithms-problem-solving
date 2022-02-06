#include <gtest/gtest.h>
#include "Solution.cpp"

class TestCase
{
    std::vector<int> nums,
        correct;
    Solution sol;

public:
    TestCase(std::vector<int> nums, std::vector<int> correct)
        : nums(nums),
          correct(correct)
    {
    }

    void go1()
    {
        sol.moveZeros1(nums);
        EXPECT_EQ(nums, correct);
    }
    void go2()
    {
        sol.moveZeros2(nums);
        EXPECT_EQ(nums, correct);
    }

    static std::vector<TestCase> init()
    {
        std::vector<TestCase> testCases;
        testCases.push_back(TestCase({0, 1, 0, 3, 12},
                                     {1, 3, 12, 0, 0}));
        testCases.push_back(TestCase({0},
                                     {0}));
        testCases.push_back(TestCase({1, 0, -3},
                                     {1, -3, 0}));
        return testCases;
    }
};

TEST(move_zeros_1, correctnes)
{
    auto testCases = TestCase::init();

    for (TestCase i : testCases)
        i.go1();
}
TEST(move_zeros_2, correctnes)
{
    auto testCases = TestCase::init();

    for (TestCase i : testCases)
        i.go2();
}
