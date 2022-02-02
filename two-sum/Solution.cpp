#include <vector>
#include <map>

class Solution
{
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
        std::map<int, int> hash;
        int required;
        for(int i = 0; i < nums.size(); i++)
        {
            required = target - nums[i];
            auto requiredit = hash.find(required);
            if(requiredit != hash.end())
                return{i, requiredit->second};
            else
            {
                hash[nums[i]] = i;
            }
        }
        return {};
    }
};