#include <gtest/gtest.h>
#include "Solution.cpp"
#include <vector>

class TestCase
{
    ListNode *m_head,
        *m_correct;
    int m_n;
    Solution m_sol;

    ListNode *nodeFromVector(std::vector<int> v)
    {
        if (!v.size())
        {
            return nullptr;
        }
        ListNode *head;
        *head = ListNode(head[0]);

        ListNode *current = head;
        for (int i = 1; i < v.size(); i++)
        {
            *current->next = ListNode(v[i]);
            current = current->next;
        }
        return head;
    }

public:
    TestCase(ListNode *head, int n, ListNode *correct)
        : m_head(head),
          m_correct(correct),
          m_n(n) {}

    TestCase(std::vector<int> head, int n, std::vector<int> correct)
        : m_head(nodeFromVector(head)),
          m_correct(nodeFromVector(correct)),
          m_n(n) {}

    void go()
    {
        ListNode* sol = m_sol.removeNthFromEnd(m_head, m_n);
        while(sol)
        {
            EXPECT_EQ(sol->val,m_correct->val);
            sol = sol-> next;
        }
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
