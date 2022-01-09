#include <vector>
#include <limits>
#include <bits/stdc++.h>

class Solution
{
    int auxMinCost( 
        std::vector<unsigned int>cuts,
        std::vector<std::vector<unsigned int>> & dp,
        unsigned int lo,
        unsigned int hi
    {
        if(lo > hi)
            return 0;
        if( dp[lo][hi] < UINT32_MAX)
            return dp[lo][hi];
        unsigned int temp;
        for(int i = lo; i <= hi; i++)
        {
            temp = cuts[hi+1] - cuts[lo-1] + auxMinCost(cuts,dp,lo,i-1) + auxMinCost(cuts,dp,i+1,hi);
            if( temp < dp[lo][hi])
                dp[lo][hi] = temp;
        }
        return dp[lo][hi];
    }

public:
    int minCost(  unsigned int n, std::vector<  unsigned int> cuts)
    {
        sort(cuts.begin(),cuts.end());
        cuts.push_back(n);
        std::vector<std::vector<unsigned int>> dp;
        {
            std::vector<unsigned int> dprow;
            for (int i = 0; i < 1 + cuts.size(); i++)
            {
                for (int j = 0; j < n + 1; j++)
                {
                    dprow.push_back(UINT32_MAX);
                }
                dp.push_back(dprow);
                dprow.clear();
            }
        }
        return auxMinCost(cuts,dp,0,n);
    }
};