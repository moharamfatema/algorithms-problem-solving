// https://leetcode.com/problems/word-pattern/submissions/869695751/

class Solution {
private:
    vector<string> tokenize(string s){
        vector<string> tokens = {};
        string token = "";

        for(char c: s){
            if (c == ' '){
                tokens.push_back(token);
                token = "";
            }else{
                token += c;
            }
        }
        tokens.push_back(token);
        // cout << "found " << tokens.size() << " tokens\n";
        return tokens;
    }
public:
    bool wordPattern(string pattern, string s) {
        vector<string> tokens = tokenize(s);
        map<char,string> hash;
        map<string,char> rev;
        int count = 0;
        for (char c: pattern){
            auto it = hash.find(c);
            auto itRev = rev.find(tokens[count]);
            if(it != hash.end() && hash[c] != tokens[count]){
                return false;    
            }if(it == hash.end()){
                if (itRev != rev.end()){
                    return false;
                }
                hash[c] = tokens[count];
                rev[tokens[count]] = c;
            }
            count ++;
            // cout << "iteration " << count << "\n";
        }
        
        return (count == tokens.size());
    }
};
