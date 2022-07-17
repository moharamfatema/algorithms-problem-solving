#include <string>
using namespace std;

class Solution {
    string revers(string s, int i, int j)
    {
        int start = i, end = j;
        char temp;
        while(i <= start + (end - start) / 2)
        {
            temp = s[i];
            s[i] = s[j];
            s[j] = temp;
            i++;
            j--;
        }return s;
    }
public:
    string reverseWords(string s) {
        string rev = s;
        int i = 0;
        int n = s.size();
        for(int k = 0; k < n; k++)
        {
            if(s[k] == ' '){
                rev = revers(rev, i, k - 1);
                i = k + 1;
            }
            
        }
        if(i < n)
        {
            rev = revers(rev,i,n - 1);
        }
        return rev;
    }
};