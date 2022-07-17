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

    void go()
    {
        EXPECT_EQ(sol.sortedSquares(nums), correct);
    }
    void go2ptrs()
    {
        EXPECT_EQ(sol.sortedSquaresTwoPtrs(nums), correct);
    }
    void go2()
    {
        EXPECT_EQ(sol.sortedSquares2(nums), correct);
    }
    static std::vector<TestCase> init()
    {
        std::vector<TestCase> testCases;
        testCases.push_back(TestCase({-4, -1, 0, 3, 10}, {0, 1, 9, 16, 100}));
        testCases.push_back(TestCase({-7, -3, 2, 3, 11}, {4, 9, 9, 49, 121}));
        return testCases;
    }
};

TEST(squares_of_a_sorted_array, correctnes)
{
    auto testCases = TestCase::init();

    for (TestCase i : testCases)
        i.go();
}
TEST(squares_of_a_sorted_array_2_ptrs, correctnes)
{
    auto testCases = TestCase::init();

    for (TestCase i : testCases)
        i.go2ptrs();
}
TEST(squares_of_a_sorted_array_2, correctnes)
{
    auto testCases = TestCase::init();

    for (TestCase i : testCases)
        i.go2();
}
