#include <gtest/gtest.h>
#include "Solution.cpp"

class TestCase
{
    std::vector<int> nums,
        correct;
    int k;
    Solution sol;

public:
    TestCase(std::vector<int> nums, int k, std::vector<int> correct)
        : nums(nums),
          k(k),
          correct(correct)
    {
    }

    void go1()
    {
        sol.rotate1(nums, k);
        EXPECT_EQ(nums, correct);
    }
    void go2()
    {
        sol.rotate2(nums, k);
        EXPECT_EQ(nums, correct);
    }
    void go3()
    {
        sol.rotate3(nums, k);
        EXPECT_EQ(nums, correct);
    }
    static std::vector<TestCase> init()
    {
        std::vector<TestCase> testCases;
        testCases.push_back(TestCase({1, 2, 3, 4, 5, 6, 7}, 3,
                                     {5, 6, 7, 1, 2, 3, 4}));
        testCases.push_back(TestCase({-1, -100, 3, 99}, 2, 
                                     {3, 99, -1, -100}));
        testCases.push_back(TestCase({1, 2, 3}, 1, 
                                     {3, 1, 2}));
        return testCases;
    }
};

TEST(rotate_array_1, correctnes)
{
    auto testCases = TestCase::init();

    for (TestCase i : testCases)
        i.go1();
}
TEST(rotate_array_2, correctnes)
{
    auto testCases = TestCase::init();

    for (TestCase i : testCases)
        i.go2();
}
TEST(rotate_array_3, correctnes)
{
    auto testCases = TestCase::init();

    for (TestCase i : testCases)
        i.go3();
}
