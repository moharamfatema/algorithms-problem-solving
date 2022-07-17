#include <gtest/gtest.h>
#include <vector>
#include "Solution.cpp"

class TestCase
{
    ListNode *m_l1, *m_l2, *m_correct;
    Solution sol;
public:
    TestCase(
        std::vector<int> l1,
        std::vector<int> l2,
        std::vector<int> correct)
    {
        m_l1 = sol.arrayToList(l1);
        m_l2 = sol.arrayToList(l2);
        m_correct = sol.arrayToList(correct);
    }

    void Go()
    {
        EXPECT_EQ(sol.convertArr(sol.addTwoNumbers(m_l1,m_l2)),sol.convertArr(m_correct));
    }
};

TEST(add_two_numbers,add_two_numbers_correctnes_Test)
{
    std::vector<TestCase> testCases;
    testCases.push_back(TestCase({9,9,9,9,9,9,9},{9,9,9,9},{8,9,9,9,0,0,0,1}));
    testCases.push_back(TestCase({2,4,3},{5,6,4},{7,0,8}));

    for(TestCase i : testCases)
        i.Go();
}