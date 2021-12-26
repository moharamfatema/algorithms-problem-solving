#include <vector>
#include <limits>
#include <bits/stdc++.h>

class Solution
{
    int auxMinCost( unsigned int n, unsigned int i, unsigned int j, std::vector<  unsigned int> cuts, std::vector<std::vector<unsigned int>> &dp)
    {
        unsigned int temp;
        if (dp[i][n] != UINT32_MAX)
            return dp[i][n];
        if (i == j)
        {
            dp[i][n] = 0;
            return dp[i][n];
        }
        for (int k = i; i < j + 1; i++)
        {
            temp = n + auxMinCost(cuts[k - 1], i, k - 1, cuts, dp) + auxMinCost(n - cuts[k - 1], k + 1, cuts.size(), cuts, dp);
            if (temp < dp[i][n])
                dp[i][n] = temp;
        }
        return dp[i][n];
    }

public:
    int minCost(  unsigned int n, std::vector<  unsigned int> cuts)
    {
        sort(cuts.begin(),cuts.end());
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
        return auxMinCost(n,0,cuts.size(),cuts,dp);
    }
};