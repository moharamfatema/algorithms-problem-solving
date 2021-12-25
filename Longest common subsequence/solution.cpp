#include <string>
#include <iostream>

class Solution
{

public:
    int longestCommonSubsequence(std::string text1, std::string text2)
    {
        const int m = text1.length();
        const int n = text2.length();
        int dp[m+1][n+1];
        for (int i = 1; i < m+1; i++)
            dp[i][0] = 0;
        for (int j = 0; j < n+1; j++)
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
        /*print dp*/
        /*for (int i = 0; i < m+1; i++)
        {
            for (int j = 0; j < n+1; j++)
            {
                std::cout << dp[i][j] << "\t";
            }
            std::cout << "\n";
        }*/
        return dp[m][n];
    }
};