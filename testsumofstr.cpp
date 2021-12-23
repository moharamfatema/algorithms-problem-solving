#include <gtest/gtest.h>
#include <string>
#include "main.cpp"

TEST(TestSumOfStr,TestCorrectness){
    std::string num1, num2;
    std::string list1[] = {"11","456","0","999"};
    std::string list2[] = {"123","77","0","9999"};
    
    std::string list3[] = {"134","533","0","10998"};
    for(int i = 0; i < 4; i++)
    {
        EXPECT_EQ(addStrings(list1[i],list2[i]),list3[i]);
    } 
}
