// https://leetcode.com/problems/maximum-ice-cream-bars/submissions/872622234/

class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(),costs.end());
        int count = 0;
        for (int bar : costs){
            if(coins >= bar){
                count ++;
                coins -= bar;
            }else{
                break;
            }
        }
        return count;
    }
};
