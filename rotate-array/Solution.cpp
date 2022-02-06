#include <vector>

typedef std::vector<int> v;

class Solution
{
    void swap(int& a, int&b)
    {
        int temp = a;
        a = b;
        b = temp;
    }
public:
    void rotate1(v &nums, int k) //uses additional space O(min(k,n))
    {
        if (k < 1)
            return;
        // insert then delete
        int n = nums.size();
        k = k % n;

        nums.insert(nums.begin(), nums.end() - k, nums.end());
        nums.resize(n);
    }
    void rotate2(v &nums, int k)
    {
        int n = nums.size();
        k %= n;
        for(int i = 0; i < k; i++)
            swap(nums[i], nums[n - k + i]);
        for(int i = k; i <n - k; i++)
        {
            for(int j = i; j < n - 1; j++)
                swap(nums[j],nums[j + 1]);
        }
    }
    void rotate3(v &nums, int k)
    {
    }
};