#include <gtest/gtest.h>
#include "Solution.cpp"

class TestCase
{
    bool correct;
    std::string s1, s2;
    Solution sol;

public:
    TestCase(std::string s, std::string s2, bool correct)
        : s1(s1),
        s2(s2),
          correct(correct)
    {
    }

    void go1()
    {
        bool res = sol.checkInclusion(s1,s2);
        EXPECT_EQ(res, correct);
    }
    static std::vector<TestCase> init()
    {
        std::vector<TestCase> testCases;
        testCases.push_back(TestCase("ab", "eidbaooo", true));
        testCases.push_back(TestCase("ab", "eidboaoo", false));

        return testCases;
    }
};

TEST(permutation, correctnes)
{
    auto testCases = TestCase::init();

    for (TestCase i : testCases)
        i.go1();
}

