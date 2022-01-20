#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "Solution.cpp"

using ::testing::ContainerEq;

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

    nums1 = {0,0,0,0,0};
    nums2 = {-1,0,0,0,0,0,1};
    correct = 0.0;
    EXPECT_DOUBLE_EQ(sol.findMedianSortedArrays(nums1,nums2),correct);

    nums1 = {3};
    nums2 = {-2,-1};
    correct = -1;
    EXPECT_DOUBLE_EQ(sol.findMedianSortedArrays(nums1,nums2),correct);

    nums1 = {2,2,4,4};
    nums2 = {2,2,4,4};
    correct = 3.0;
    EXPECT_DOUBLE_EQ(sol.findMedianSortedArrays(nums1,nums2),correct);

    nums1 = {1,2,3,4};
    nums2 = {5,6,7,8};
    correct = 4.5;
    EXPECT_DOUBLE_EQ(sol.findMedianSortedArrays(nums1,nums2),correct);

    nums1 = {1,2,3};
    nums2 = {4,5,6,7};
    correct = 4.0;
    EXPECT_DOUBLE_EQ(sol.findMedianSortedArrays(nums1,nums2),correct);

}
