#ifndef SOLUTION_HPP
#define SOLUTION_HPP
#include <vector>
#include <queue>

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution
{
    private:
    static void breadth_first_search(std::queue<std::queue<TreeNode *>>& q,TreeNode* root, std::vector<std::vector<int>>& v);
    public:
    static std::vector<std::vector<int>> zigzagLevelOrder(TreeNode* root);
};

#endif