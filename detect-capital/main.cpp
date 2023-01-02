// https://leetcode.com/problems/detect-capital/submissions/869678420/

class Solution {
public:
    bool detectCapitalUse(string word) {
        bool firstCap = false;
        bool allCap = false;
        bool currentCap = false;

        int count = 0;
        for (char c : word){
            currentCap = (c < 0x61);
            if (count == 0){
                firstCap = currentCap;
                count ++;
                continue;
            }
            if(count == 1){
                allCap = (firstCap && currentCap);
            }
            if(currentCap){
                if (!allCap || !firstCap)
                    return false;
            }else{
                if (allCap)
                    return false;
            }
            count ++;
        }
        return (allCap || firstCap || !(allCap || firstCap));
    }
};

