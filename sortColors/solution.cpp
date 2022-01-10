#include <vector>
#define RED 0
#define WHITE 1
#define BLUE 2

class Solution
{
private:
    void swap(int &a, int &b)
    {
        int temp = a;
        a = b;
        b = temp;
    }
    int max(int a, int b)
    {
        return (a > b) ? a : b;
    }

public:
    void sortColors(std::vector<int> &nums)
    {
        int i = 0;
        for (i; i < nums.size(); i++)
        {
            if (nums[i] == WHITE)
                break;
        }
        if (i == nums.size())
        {
            for (i = 0; i < nums.size(); i++)
            {
                if (nums[i] == BLUE)
                    break;
            }
            if (i == nums.size()) return;
        }
        // partition around i, pivot = 1(white)
        int lo = -1;
        int hi = nums.size() - 1;
        swap(nums[i], nums[nums.size() - 1]);
        for (int j = 0; j < hi; j++)
        {
            if (nums[j] < nums[hi])
            {
                swap(nums[++lo], nums[j]);
            }
        }
        for (int j = lo + 1; j < hi; j++)
        {
            if (nums[j] == nums[hi])
            {
                swap(nums[++lo], nums[j]);
            }
        }
        swap(nums[hi], nums[++lo]);
    }
};