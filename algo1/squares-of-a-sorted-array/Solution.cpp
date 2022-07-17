#include <vector>
using namespace std;

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

int negToPos(vector<int> nums)
    {
        int start = 0;
        int end = nums.size() - 1;
        int mid;
        
        while(end >= start)
        {
            mid = start + (end - start) / 2;
            if (start == end || nums[mid] == 0 || (nums[mid] > 0 && nums[mid - 1] < 0))
                return mid;
            else if(nums[mid] > 0)
                end = mid - 1;
            else
                start = mid + 1;
        }
        return 0;
    }
public:
    vector<int> sortedSquares2(vector<int>& nums) {
        vector<int> squares (nums.size());
        int i = negToPos(nums);
        int j = i - 1;
        if (j < 0)
            return {nums[0] * nums[0]};
        int n = 0;
        while(j >= 0 && i < nums.size())
        {
            if (nums[i] * nums[i] <= nums[j] * nums[j])
                squares[n++] = nums[i] * nums[i++];
            else
                squares[n++] = nums[j] * nums[j++];
        }
        squares[n] = nums[j] * nums[j];
        return squares;
    }
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