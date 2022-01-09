#include <gtest/gtest.h>
#include <string>
#include "solution.cpp"
#include <fstream>
#define NO_OF_TEST_FILES 6

std::vector<std::vector<int>> getTestCase(std::string filename, int& sol)
{
    std::ifstream fin;
    fin.open(filename);
    fin >> sol;
    int a, b;
    std::vector<std::vector<int>> testCase;
    std::vector<int> course;
    while(!fin.eof())
    {
        fin >> a;
        fin >> b;
        course = {a,b};
        testCase.push_back(course);
    }
    fin.close();
    return testCase;
}

TEST(testCourses,testCorrectness)
{
    int sol;
    Solution solution;
    std::vector<std::vector<int>> testCase;
    for(int i = 0; i < NO_OF_TEST_FILES; i++)
    {
        testCase = getTestCase("testCases/test"+std::to_string(i)+".txt",sol);
        EXPECT_EQ(solution.scheduleCourse(testCase),sol) << "Failed on test " << i<<"\n";
    }
}