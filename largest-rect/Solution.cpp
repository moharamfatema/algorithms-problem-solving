#include <vector>

class Utils
{
public:
    static int min(std::vector<int> &arr, int lo, int hi)
    {
        int min = arr[lo];
        for (int i = lo; i <= hi; i++)
        {
            if (arr[i] < min)
                min = arr[i];
        }
        return min;
    }
    static std::vector<int> maxVal(std::vector<std::vector<int>> vals)
    {
        std::vector<int> max = vals[0];
        for (std::vector<int> i : vals)
        {
            if (i[0] > max[0])
                max = i;
        }
        return max;
    }
};
class Solution
{
    // like the max subarray problem but calculate (min value * number of elements)

    std::vector<int> maxCrossing(std::vector<int> &arr, int lo, int hi, int mid)
    {
        if (lo >= hi)
            return (std::vector<int>({arr[lo], lo, lo}));

        int currentVal = Utils::min(arr, mid, mid + 1) * 2,
            val = currentVal,
            newlo = mid,
            newhi = mid + 1;

        //right side
        for (int i = mid; i >= lo; i--)
        {
            val = Utils::min(arr, i, newhi) * (newhi - i + 1);
            if (val > currentVal)
            {
                newlo = i;
                currentVal = val;
            }
        }
        //left side
        for (int i = newlo + 1; i <= hi; i++)
        {
            val = Utils::min(arr, newlo, i) * (i - newlo + 1);
            if (val > currentVal)
            {
                newhi = i;
                currentVal = val;
            }
        }

        //reset 
        int newlo2 = mid,
            newhi2 = mid + 1,
            currentVal2 = Utils::min(arr, mid, mid + 1) * 2;

        //left side
        for (int i = newlo2 + 1; i <= hi; i++)
        {
            val = Utils::min(arr, newlo2, i) * (i - newlo2 + 1);
            if (val > currentVal)
            {
                newhi2 = i;
                currentVal2 = val;
            }
        }
        //right side
        for (int i = newhi2; i >= lo; i--)
        {
            val = Utils::min(arr, i, newhi2) * (newhi2 - i + 1);
            if (val > currentVal)
            {
                newlo2 = i;
                currentVal2 = val;
            }
        }

        if( currentVal2 > currentVal)
            return {currentVal2, newlo2, newhi2};
        return {currentVal, newlo, newhi};
            
    }

    std::vector<int> subarray(std::vector<int> &arr, int lo, int hi)
    {
        if (lo >= hi)
            return (std::vector<int>({arr[lo], lo, lo}));
        int mid = lo + (hi - lo) / 2;
        std::vector<int> leftMax = subarray(arr, lo, mid);
        std::vector<int> rightMax = subarray(arr, mid + 1, hi);
        std::vector<int> crossMax = maxCrossing(arr, lo, hi, mid);

        return (Utils::maxVal({leftMax, rightMax, crossMax}));
    }

public:
    int largestRectangleArea(std::vector<int> &heights)
    {
        return subarray(heights, 0, heights.size() - 1)[0];
    }
};