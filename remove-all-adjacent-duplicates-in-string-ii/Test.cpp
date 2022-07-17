#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "Solution.cpp"

using ::testing::ContainerEq;
using ::testing::IsSupersetOf;

class TestCase
{
    std::string s, correct;
    int k;

    Solution sol;

public:
    TestCase(std::string s, std::string correct, int k)
        : s(s),
          correct(correct),
          k(k)
    {}
        
    static std::vector<TestCase> initialize()
    {
        std::vector<TestCase> testCases;
        testCases.push_back(TestCase("abcd","abcd",2));
        testCases.push_back(TestCase("deeedbbcccbdaa","aa",3));
        testCases.push_back(TestCase("pbbcggttciiippooaais","ps",2));
        return testCases;
    }

    void go()
    {
        EXPECT_EQ(correct, sol.removeDuplicates(s, k));
    }
};

TEST(remove_duplicates, remove_duplicates_correctnes)
{
    auto testCases = TestCase::initialize();

    for (TestCase i : testCases)
        i.go();
}
