#include <gtest/gtest.h>
#include "Solution.cpp"

TEST(testMedian,testCorrectness)
{
    Solution sol;
    
    std::vector<int> nums1 =  {1,3};
    std::vector<int> nums2 =  {2};
    double correct = 2.0;
    EXPECT_DOUBLE_EQ(sol.findMedianSortedArrays(nums1,nums2),correct);

    nums1 = {1,2};
    nums2 = {3,4};
    correct = 2.5;
    EXPECT_DOUBLE_EQ(sol.findMedianSortedArrays(nums1,nums2),correct);

}