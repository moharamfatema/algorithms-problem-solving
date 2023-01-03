// https://leetcode.com/problems/delete-columns-to-make-sorted/submissions/870405738/

class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int nCol = strs[0].size();
        int count = 0;
        for (int i = 0; i < nCol; i++)
        {
            for (int j = 1; j < strs.size(); j++)
            {
                if(strs[j-1][i] > strs[j][i])
                {
                    count ++; 
                    break;
                }
            }
        }
        return count;
    }
};
