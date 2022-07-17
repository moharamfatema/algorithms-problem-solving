#include <gtest/gtest.h>
#include "Solution.cpp"

class TestCase
{
    int correct;
    std::string s;
    Solution sol;

public:
    TestCase(std::string s, int correct)
        : s(s),
          correct(correct)
    {
    }

    void go1()
    {
        int res = sol.lengthOfLongestSubstring(s);
        EXPECT_EQ(res, correct);
    }
    static std::vector<TestCase> init()
    {
        std::vector<TestCase> testCases;
        testCases.push_back(TestCase("abcabcbb", 3));
        testCases.push_back(TestCase("bbbbb", 1));
        testCases.push_back(TestCase("pwwkew", 3));
        testCases.push_back(TestCase("dvdf", 3));
        return testCases;
    }
};

TEST(lengthOfLongestSubstringTest, correctnes)
{
    auto testCases = TestCase::init();

    for (TestCase i : testCases)
        i.go1();
}

