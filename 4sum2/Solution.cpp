#include <vector>
#include <map>

typedef std::vector<int> v;
class Solution
{
public:
    int fourSumCountHash(v nums1, v nums2, v nums3, v nums4)
    {
        std::map<int, int> threenfour;
        int count = 0;

        for(int i : nums3)
        {
            for(int j : nums4)
            {
                threenfour[i + j]++;
            }
        }

        for( int i : nums1)
        {
            for(int j : nums2)
            {
                count += threenfour[-(i + j)];
            }
        }


        return count;
    }
    int fourSumCountBruteForce(v nums1, v nums2, v nums3, v nums4)
    {
        // bruteforce o(n^4)
        int n = nums1.size();
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                for (int k = 0; k < n; k++)
                {
                    for (int l = 0; l < n; l++)
                    {
                        if (nums1[i] + nums2[j] + nums3[k] + nums4[l] == 0)
                            count++;
                    }
                }
            }
        }
        return count;
    }
};