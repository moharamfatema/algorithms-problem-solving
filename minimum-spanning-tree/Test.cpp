#include <gtest/gtest.h>

#include "Kruskal.cpp"

TEST(kruskal,correctness)
{
    std::vector<std::vector<int>> points = {{0,0},{2,2},{3,10},{5,2},{7,0}};
    int correct = 20;
    EXPECT_EQ(Kruskal::mstCost(points),correct);
}