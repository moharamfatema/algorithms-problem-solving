#include <string>

class Solution {
public:
    std::string removeDuplicates(std::string s, int k) {
        bool flag = true;
        std::string newS = "";
        while(flag)
        {
            for(int i = 0; i < s.size() - k + 1 ; i++)
            {
                for(int j = 1; j < k; j++)
                {
                    if (s[i] != s[j])
                    {
                        newS += s[i];
                        flag = true;
                        break;
                    }
                    if (j != k-1)
                        flag = false;
                }
            }
        }
        return newS;
    }
};