#include <vector>
#include <iostream>

typedef std::vector<int> v;

class Solution
{
    void swap(int& x, int& y)
    {
        int t = x;
        x = y;
        y = t;
    }
    void shiftLeft(std::vector<int>& nums, int start, int step)
    {
        for (int i = start; i > start - step; i--)
            swap(nums[i], nums[(i - 1 == -1)?nums.size() - 1: i -1]);
    }
    void shiftRight(std::vector<int>& nums, int start, int step)
    {
        for (int i = start; i < start + step; i++)
            swap(nums[i], nums[(i + 1) % nums.size()]);
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
    void rotate2(v &nums, int k) //space complexity: O(1)
    {
        int n = nums.size();
        k %= n;
        for(int i = 0; i < k; i++) //replace first part of array with the part at the end O(min(k,n))
            swap(nums[i], nums[n - k + i]);
        for(int i = k; i <n - k; i++) //fix the remaining elements in the middle O((n)^2)
        {
            for(int j = i; j < n - 1; j++)
                swap(nums[j],nums[j + 1]);
        }
    }
    void rotate3(std::vector<int>& nums, int k) {
        int n = nums.size();
            
        if( k % n == 0) return;
        if(k > n) k = k % n;
        
        if (k <= n / 2){
            for(int i = n - k; i < n; i++){
                shiftLeft(nums, i, n - k);
            }
        }else{
            for(int i = n - k - 1; i >= 0; i--)
            {
                shiftRight(nums, i, k);
            }
        }
    }
};

int main(){
    Solution sol;
    std::vector<int> nums {1,2,3,4,5,6,7};
    sol.rotate3(nums, 5);
    for(int i : nums)
        std::cout << i << "\n";

    return 0;
}