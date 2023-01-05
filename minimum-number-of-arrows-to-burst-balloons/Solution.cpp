// https://leetcode.com/problems/minimum-number-of-arrows-to-burst-balloons/submissions/871956490/

class Solution {
private:
    bool passes(int arrow, vector<int> point)
    {
        return (arrow <= point[1] && arrow >= point[0]);
    }

public:
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(), points.end(),
            [](const std::vector<int>& a, const std::vector<int>& b) {
                return a[1] < b[1];
        });

        int lastArrow, count = 0;
        
        for (int i = 0; i < points.size(); i++){
            if(!((count > 0) && passes(lastArrow,points[i]))){
                lastArrow = points[i][1];
                count ++;
            }
        }return count;
    }
};
