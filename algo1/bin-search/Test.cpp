#include <gtest/gtest.h>
#include "Solution.cpp"

class TestCase
{
    std::vector<int> nums;
    int correct;
    int target;
    Solution sol;

public:
    TestCase(std::vector<int> nums, int correct, int target)
        : nums(nums),
          correct(correct),
          target(target)
    {
    }

    void goBinSearch()
    {
        EXPECT_EQ(sol.search(nums, target), correct);
    }
    void goFirstBadVersion()
    {
        sol.setVersions(nums);
        EXPECT_EQ(sol.firstBadVersion(target),correct);
    }
    static std::vector<TestCase> initializeBinSearch()
    {
        std::vector<TestCase> testCases;
        testCases.push_back(TestCase({-1, 0, 3, 5, 9, 12}, 4, 9));
        testCases.push_back(TestCase({-1, 0, 3, 5, 9, 12}, -1, 2));
        return testCases;
    }
    static std::vector<TestCase> initializeFirstBadVersion()
    {
        std::vector<TestCase> testCases;
        testCases.push_back(TestCase({0,0,0,1,1}, 4, 5));
        testCases.push_back(TestCase({1}, 1, 1));
        return testCases;
    }
};

TEST(binary_search, correctnes)
{
    auto testCases = TestCase::initializeBinSearch();

    for (TestCase i : testCases)
        i.goBinSearch();
}
TEST(first_bad_version, correctness)
{
    auto testCases = TestCase::initializeFirstBadVersion();

    for(TestCase i : testCases)
        i.goFirstBadVersion();
}