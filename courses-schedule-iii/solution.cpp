#include <cassert>
#include <vector>
#include <bits/stdc++.h>

class minComparator
{
    public:
    bool operator()(std::vector<int> const& a,std::vector<int> const& b) const
    {
        assert(a.size() == 2);
        assert(b.size() == 2);

        return a.back() > b.back();
    }
};
class maxComparator
{
    public:
    bool operator()(std::vector<int> const& a,std::vector<int> const& b) const
    {
        assert(a.size() == 2);
        assert(b.size() == 2);

        return a.front() < b.front();
    }
};
using minpq = std::priority_queue<std::vector<int>,std::vector<std::vector<int>>,minComparator>;

using maxpq = std::priority_queue<std::vector<int>,std::vector<std::vector<int>>,maxComparator>;

class Solution
{
    private:
    
    public:
    int scheduleCourse(std::vector<std::vector<int>>& intervals) 
        
    {
        minpq q;
        for(const auto& a: intervals )
        {
            q.push(a);  
        }
        
        maxpq sol;
        int end = 0;
        std::vector<int> iterator;
        for(int i = 0; i < intervals.size() && !q.empty(); i++)
        {
            iterator = q.top();
            q.pop();
            if(end+iterator.front() <= iterator.back())
            {
                sol.push(iterator);
                end += iterator.front();
            } else if(!sol.empty() && iterator.front() < sol.top().front())
            {
                end += iterator.front() - sol.top().front();
                sol.pop();
                sol.push(iterator);

            }
        }

        return sol.size();
        }
};