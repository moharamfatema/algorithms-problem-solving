#include <vector>

class Solution
{
    int pos(std::vector<int> &nums, int target)
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
        return start;
    }

public:
    std::vector<int> sortedSquares(std::vector<int> &nums)
    {
        std::vector<int> sq;

        int n2;
        for (int i : nums)
        {
            n2 = i * i;
            sq.insert(sq.begin() + pos(sq, n2), n2);
        }
        return sq;
    }
    std::vector<int> sortedSquaresTwoPtrs(std::vector<int> &nums)
    {
        int n = nums.size(),
            a = 0,
            b = n - 1;
        std::vector<int> sq(n);

        for (int i = 0; i < n; i++)
        {
            if (nums[a] * nums[a] >= nums[b] * nums[b])
            {
                sq[n - i - 1] = nums[a] * nums[a];
                a++;
            }
            else
            {
                sq[n - i - 1] = nums[b] * nums[b];
                b--;
            }
        }
        return sq;
    }
};