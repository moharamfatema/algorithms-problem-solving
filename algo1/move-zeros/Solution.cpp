#include <vector>
class Solution
{
    void swap(int &a, int &b)
    {
        int temp = a;
        a = b;
        b = temp;
    }

public:
    void moveZeros1(std::vector<int> &nums)
    {
        /*using additional space O(n)*/
        std::vector<int> v;
        int count = 0;

        for (int i : nums)
        {
            if (i == 0)
                count++;
            else
                v.push_back(i);
        }
        for (int i = 0; i < count; i++)
            v.push_back(0);
        for (int i = 0; i < v.size(); i++)
            nums[i] = v[i];
    }
    void moveZeros2(std::vector<int> &nums)
    {
        int a = -1;

        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i])
            {
                swap(nums[i], nums[++a]);
            }
        }
    }
};