#include <map>
class Solution {
public:
    int lengthOfLongestSubstring(std::string s) {
        std::map<char,int> count;
        int start = 0,
            end = 0,
            maxLen = 0;
        for (int i = 0; i < s.size(); i++)
        {
            count.clear();
            for (int j = i; j < s.size(); j++)
            {
                if(count.find(s[j]) == count.end())
                {
                    count[s[j]] = 1;
                    end = j;
                }
                else
                    break;
            }
            
            if(end - i + 1 > maxLen)
                maxLen = end - i + 1;
        }
        return maxLen;
    }
};