#include <string>
#include <vector>
using namespace std;
class Solution {
private:
    string convertToString(vector<char> a)
    {
        
        string s = "";
        auto i = a.cbegin();
        if (*i == '0')i++;
        for (i; i<a.cend(); i++) {
            s = s + *i;
        }
        return s;
    }
    string max(string a, string b){
        return (a.size() > b.size())?a:b;
    }
    string min(string a, string b){
        return (a.size() < b.size())?a:b;
    }
public:
    string addBinary(string a, string b) {
        string smin = min(a,b);
        string smax = max(a,b);
        vector<char> s;
        s.resize(smax.size() + 1);
        char c = 0;
        int i = 0, k;
        for( i = 0; i < smin.size(); i++)
        {
            k = smax.size()- i;
            s[k] = '0' + (int) c + (int)(a[a.size() - 1-i]=='1' )+ (int)(b[b.size() - 1-i]=='1');
            c = (s[k] - '0') > 1;
            if(c) s[k] = '0' + (s[k] > '2');
        }
        for(i = smin.size(); i < smax.size(); i++)
        {
            k = smax.size() - i;

            s[k] = '0' + (int) c + (int)(smax[k-1]=='1');
            c = (s[k] - '0') > 1;
            if(c) s[k] ='0' +( s[k] > '2');
        }
        s[0] = '0' + c;
    
    return convertToString(s);
    }
};