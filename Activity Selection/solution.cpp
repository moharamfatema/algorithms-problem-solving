#include <vector>
#include <bits/stdc++.h>

class Solution
{

    public:
    std::vector<std::vector<int>> activitySelection(std::vector<std::vector<int>>& intervals)
    {
        /*Assuming intervals are sorted by finish time*/
        //sort(intervals.begin()[1],intervals.end()[1]);

        std::vector<std::vector<int>> sol;
        int start, end;
        start = intervals[0][0];
        end = intervals[0][1];

        sol.push_back(intervals[0]);
        
        auto iterator = intervals.cbegin();
        advance(iterator,1);

        for(iterator; iterator<intervals.cend(); iterator++)
        {
            if(iterator->front() >= end)
            {
                sol.push_back(*iterator);
                end = iterator->back();
            }
        }

        return sol;
    }
};