#include <vector>

class Util
{
    public:
    static double median(std::vector<int> arr)
    {
        if (arr.size() % 2 == 0) //even size
            return((arr[arr.size() / 2] + arr[arr.size() / 2 + 1]) / 2.0);
        else
            return(arr[arr.size() / 2]);
    }
    static std::vector<int> slice(std::vector<int> arr, int i, int j)
    {
        std::vector<int> result(j - i);
        copy(arr.begin() + i, arr.begin() + j, result.begin());
        return result;
    }
};

class Solution {
public:
    double findMedianSortedArrays(std::vector<int>& nums1, std::vector<int>& nums2) {
        if(nums1.size() == 0 && nums2.size() == 0)
            return 0;
        else if(nums1.size() == 0)
            return Util::median(nums2);
        else if(nums2.size() == 0)
            return Util::median(nums1);
        else if(nums1.size() == 1 && nums2.size() == 1)
        {
            nums1.insert(nums1.end(),nums2.begin(),nums2.end());
            return Util::median(nums1);
        }        
        else if (Util::median(nums1) < Util::median(nums2))
        {
            nums1 = Util::slice(nums1,nums1.size() / 2, nums1.size());
            nums2 = Util::slice(nums2,0,nums2.size() / 2 + 1);
            return findMedianSortedArrays(nums1, nums2);
        }
        else
        {
            nums2 = Util::slice(nums2,nums2.size() / 2, nums2.size());
            nums1 = Util::slice(nums1,0,nums1.size() / 2 + 1);
            return findMedianSortedArrays(nums1, nums2);
        }

        
    }
};