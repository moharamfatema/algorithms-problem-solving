#include <gtest/gtest.h>
#include "Solution.cpp"

class TestCase
{
    string s,
        correct;
    
    Solution sol;

public:
    TestCase(string s, string correct)
        : s(s),
          correct(correct)
    {
    }

    void go()
    {
        string rev = sol.reverseWords(s);
        EXPECT_EQ(rev, correct);
    }
    
    static std::vector<TestCase> init()
    {
        std::vector<TestCase> testCases;
        testCases.push_back(TestCase("Let's take LeetCode contest","s'teL ekat edoCteeL tsetnoc"));
        return testCases;
    }
};

TEST(reverse_words, correctnes)
{
    auto testCases = TestCase::init();

    for (TestCase i : testCases)
        i.go();
}
