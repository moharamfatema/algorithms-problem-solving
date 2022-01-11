#include <string>
#include <cmath>
#include <vector>
#define LEFT 0
#define RIGHT 1 
/**
 * Definition for a binary tree node.
 */
struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode() : val(0), left(nullptr), right(nullptr) {}
     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 };

class Util{
    public:
    static int binToInt(std::string str)
    {
        int len = str.length();
        int num = 0;
        for(int i = 0; i < len; i++)
        {
            num += (str[i] - '0') * pow(2,(len - i - 1));
        }
        return num;
    }
};


class Solution {
private:
    std::vector<std::string> str(TreeNode* root)
    {
        if(root == nullptr) return std::vector<std::string> {};
        else 
        {
            /*leaf node*/
            if( !root->left && !root->right)
            {
            
                return std::vector<std::string> {std::to_string(root->val)};
            }

            
            auto left = str(root->left);
            auto right = str(root->right);
            left.insert(left.end(), right.begin(), right.end());
            for(auto i = left.begin(); i < left.end(); i++)
            {
                *i = std::to_string(root->val) + *i;
            }
            return left;
        }
    }
public:
    int sumRootToLeaf(TreeNode* root) {
        int level = 0, sum = 0;
        std::vector<std::string> v = str(root);
        
        
        for(auto i : v)
        {
            sum += Util::binToInt(i);
        }
        
        return sum;
    }
};