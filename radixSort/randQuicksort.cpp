#include "header.hpp"
#include "Utils.cpp"
class Quicksort {
public:
    
    int partition(std::vector<int>& arr, int lo, int hi)
    {
        int pivot = arr[hi];
        int low = lo - 1;
        for(auto it = lo + arr.begin(); it < hi + arr.begin(); it++)
        {
            if(*it < pivot)
                Utils::swap(*it, arr[++low]);
        }
        Utils::swap(arr[++low], arr[hi]);
        return low;
    }
    void randQuicksort(std::vector<int> &arr, int lo, int hi)
    {
        if(lo < hi)
        {
            int r = lo + rand() % (1 + hi - lo);
            Utils::swap(arr[r],arr[hi]);
            int pi = partition(arr,lo,hi);
            randQuicksort(arr, lo , pi - 1);
            randQuicksort(arr, pi + 1 , hi);
        }
    }
    std::vector<int> sortArray(std::vector<int>& nums) {
        randQuicksort(nums, 0 , nums.size() - 1);
        return nums;
    }
};