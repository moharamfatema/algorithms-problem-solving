#include <string>
#include <iostream>
#include <vector>

class Solution
{
public:
    std::string actualSequence;
    int longestCommonSubsequence(std::string text1, std::string text2, bool str)
    {
        const unsigned int m = text1.length();
        const unsigned int n = text2.length();
        std::vector<std::vector<int>> dp;
        dp.resize(m+1);
        for(int i =0; i <m+1; i++)
            dp[i].resize(n+1);
        for (int i = 0; i < m+1; i++)
            dp[i][0] = 0;
        for (int j = 1; j < n+1; j++)
            dp[0][j] = 0;
        for (int i = 1; i < m+1; i++)
        {
            for (int j = 1; j < n+1; j++)
            {
                if (text1[i-1] == text2[j-1])
                    dp[i][j] = 1 + dp[i - 1][j - 1];
                else if (dp[i - 1][j] >= dp[i][j - 1])
                    dp[i][j] = dp[i - 1][j];
                else
                    dp[i][j] = dp[i][j - 1];
            }
        }
        if(str)
        {
            actualSequence = "";
            actualSequence = subsequence(text1, actualSequence, dp, m, n);
        }
        return dp[m][n];
    }
    std::string subsequence(std::string text1,std::string &sequence, std::vector<std::vector<int>> dp, unsigned int i, unsigned int j)
    {
        if( !i || !j)return sequence;

        if (dp[i][j] == 1 + dp[i][j-1] && dp[i][j] == 1 + dp[i - 1][j] )
        {
            return subsequence(text1, sequence, dp, i-1, j-1) + text1[i - 1];
        }
        else if( dp[i][j] == dp[i-1][j])
        {
            return subsequence(text1, sequence, dp, i-1, j);
        }else return subsequence(text1, sequence, dp, i, j-1);
    }
};