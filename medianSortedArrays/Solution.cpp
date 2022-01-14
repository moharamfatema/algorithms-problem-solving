#include <vector>
#include <bits/stdc++.h>
class Util
{
public:
    static int max(int a, int b)
    {
        return (a > b)? a : b;
    }
    static void swap(int &a, int &b)
    {
        int temp = a;
        a = b;
        b = temp;
    }
    static double median(std::vector<int> arr)
    {
        if (arr.size() % 2 == 0) // even size
            return ((arr[arr.size() / 2 - 1] + arr[arr.size() / 2]) / 2.0);
        else
            return (arr[arr.size() / 2]);
    }
    static std::vector<int> slice(std::vector<int> arr, int i, int j)
    {
        std::vector<int> result(j - i);
        copy(arr.begin() + i, arr.begin() + j, result.begin());
        return result;
    }
    
    
};

class Solution
{
public:
    double findMedianSortedArrays(std::vector<int> &nums1, std::vector<int> &nums2)
    {
        int n1 = nums1.size();
        int n2 = nums2.size();
        if (n1 == 0 && n2 == 0)
            return 0;
        else if (n1 == 0)
            return Util::median(nums2);
        else if (n2 == 0)
            return Util::median(nums1);
        else if (n1 == 1 && n2 == 1)
        {
            nums1.insert(nums1.end(), nums2.begin(), nums2.end());
            return Util::median(nums1);
        }else if(n1 == 1 || n2 == 1)
        {
            std::vector<int> one = (n1 == 1)? nums1 : nums2;
            std::vector<int> notOne = (n1 == 1)? nums2 : nums1;
            
            if(notOne.size() % 2 == 1)
            {
                one.insert(one.end(), notOne.begin() + (notOne.size() / 2) - 1, notOne.begin() + (notOne.size() / 2) + 2);
            }else
            {
                one.insert(one.end(), notOne.begin() + (notOne.size() / 2) - 1, notOne.begin() + (notOne.size() / 2) + 1);
            }
            std::sort(one.begin(), one.end());
            return Util::median(one);            
        }else if (n1 == 2 && n2 == 2)
        {
            nums1.insert(nums1.end(), nums2.begin(), nums2.end());
            std::sort(nums1.begin(), nums1.end());
            return Util::median(nums1);
        }else if(n1 == 2 || n2 == 2)
        {
            std::vector<int> one = (n1 == 2)? nums1 : nums2;
            std::vector<int> notOne = (n1 == 2)? nums2 : nums1;
            
            std::sort(one.begin(), one.end());
            return Util::median(one);            
        }
        else if (Util::median(nums1) < Util::median(nums2))
        {
            nums1 = Util::slice(nums1, n1 / 2, n1);
            nums2 = Util::slice(nums2, 0, n2 / 2 + 1);
            return findMedianSortedArrays(nums1, nums2);
        }
        else
        {
            nums2 = Util::slice(nums2, n2 / 2, n2);
            nums1 = Util::slice(nums1, 0, n1 / 2);
            return findMedianSortedArrays(nums1, nums2);
        }
    }
};