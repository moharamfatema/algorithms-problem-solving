#include <vector>

class Solution
{
    std::vector<int> hash(std::vector<int> &nums)
    {
        return {};
    }

public:
    std::vector<int> twoSumBruteForce(std::vector<int> &nums, int target)
    {
        //bruteforce
        int i, j;
        for(i = 0; i < nums.size(); i++)
        {
            for(j = i + 1; j < nums.size(); j++)
            {
                if(nums[i] + nums[j] == target)
                    return {i, j};
            }
        }
        return {};
    }
    std::vector<int> twoSumHash(std::vector<int> &nums, int target)
    {
        
        return {};
    }
};