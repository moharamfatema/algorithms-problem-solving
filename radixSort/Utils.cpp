#include "header.hpp"
int Utils::max(std::vector<int> arr)
{
    int maxn = arr[0];
    for (int i : arr)
    {
        if (i > maxn)
            maxn = i;
    }
    return maxn;
}
int Utils::noOfDigits(int a)
{
    int n = 0;
    while (a >= 1)
    {
        n++;
        a /= 10;
    }
    return n;
}
void Utils::swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}