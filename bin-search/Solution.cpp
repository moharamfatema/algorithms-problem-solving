#include <vector>
#include <map>

class Solution
{
    std::vector<int> versions;
    bool isBadVersion(int n)
    {
        if(n < 1) return false;
        return versions[n - 1] == 1;
    }

public:
    int search(std::vector<int> &nums, int target)
    {
        int n = nums.size(),
            start = 0,
            end = n - 1,
            mid;

        while (start <= end)
        {
            mid = start + (end - start) / 2;
            if (nums[mid] == target)
                return mid;
            else if (nums[mid] < target)
                start = mid + 1;
            else
                end = mid - 1;
        }
        return -1;
    }
    int firstBadVersion(int n)
    {
        std::map<int, bool> m;
        int start = 1,
            mid;

        std::map<int, bool>::iterator current, before;
        while (start <= n)
        {
            mid = start + (n - start + 1) / 2;
            current = m.find(mid);
            if (current == m.end())
            {
                m[mid] = isBadVersion(mid);
                current = m.find(mid);
            }
            if (!current->second) // not a bad version , look to the right
                start = mid + 1;
            else // bad version
            {
                before = m.find(mid - 1);
                if (before == m.end())
                {
                    m[mid - 1] = isBadVersion(mid - 1);
                    before = m.find(mid - 1);
                }

                if (!before->second) // first bad
                    return mid ;
                else // look to the left
                {
                    n = mid - 1;
                }
            }
        }
        return -1;
    }
    void setVersions(std::vector<int> versions)
    {
        this->versions = versions;
    }
};