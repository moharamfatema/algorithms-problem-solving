#include <gtest/gtest.h>
#include "solution.cpp"

TEST(TestActivitySelection,TestCorrectness){
    std::vector<std::vector<int>> intervals;
    intervals.push_back({1,3});
    intervals.push_back({2,6});
    intervals.push_back({8,10});
    intervals.push_back({15,18});

    
    std::vector<std::vector<int>> correctSolution = {{1,3},{8,10},{15,18}};
    Solution solution;
    std::vector<std::vector<int>> sol = solution.activitySelection(intervals);
    
    EXPECT_EQ(sol.size(),correctSolution.size());
    auto j = sol.cbegin();
    for(auto i = correctSolution.cbegin(); i < correctSolution.cend(); i++){
        EXPECT_EQ(j->front(),i->front());
        EXPECT_EQ(i->back(),i->back());
        advance(j,1);
    }    

    intervals = {{1,2},{2,3},{2,4}};
    correctSolution = {{1,2},{2,3}};

    sol = solution.activitySelection(intervals);
    
    EXPECT_EQ(sol.size(),correctSolution.size());
    j = sol.cbegin();
    for(auto i = correctSolution.cbegin(); i < correctSolution.cend(); i++){
        EXPECT_EQ(j->front(),i->front());
        EXPECT_EQ(i->back(),i->back());
        advance(j,1);
    }    

}

