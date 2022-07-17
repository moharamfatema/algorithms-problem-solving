#include <map>
#include <string>
#include <iostream>
class Solution {
    bool isPermutation(std::string s1, std::string s2)
    {
        if (s1.size() != s2.size())
            return false;
        if (s1.size() == 0)
            return true;
        std::map<char,int> count;
        std::map<char,int> count2;
        for(int i = 0; i < s1.size(); i++)
        {
            if(count.find(s1[i]) != count.end())
            {
                count[s1[i]]++;
            }else
                count[s1[i]] = 1;
            if(count2.find(s2[i]) != count2.end())
            {
                count2[s2[i]]++;
            }else
                count2[s2[i]] = 1;
        }
        
        for(auto it = count.begin(); it != count.end(); it++)
        {
            if( it->second != count2[it->first])
                return false;
        }
        return true;
    }
public:
    bool checkInclusion(std::string s1, std::string s2) {
        /*
        std::string newstr = "";
        if(s1.size() < 1) return true;
        for (int i = 0; i < s2.size() - s1.size() + 1; i++)
        {
            newstr = "";
            for( int j = i; j < i + s1.size(); j++)
                newstr = newstr + s2[j];
            if(isPermutation(s1, newstr))
                return true;
        }
        */
        return false;
    }
};
/*int main(){
    Solution sol;
    std::cout << sol.checkInclusion("ab","eidbaooo");
    return 0;
}*/