#include <iostream>
#include <string>
#include <math.h>

std::string addStrings(std::string num1, std::string num2)
{
    const int n = num1.length();
    const int m = num2.length();
    const int minLength = (n < m) ? n : m;
    const int maxLength = (n > m) ? n : m;

    char sum[maxLength + 2];
    sum[maxLength + 1] = '\0';
    int i = 1;
    unsigned int s, c = 0;
    for (i = 1; i <= maxLength + 1; i++)
    {
        if (1 + n - i > 0 && 1 + m - i > 0)
        {
            s = c + num1[n - i] - '0' + num2[m - i] - '0';
        }
        else
        {
            if ( 1 + n - i > 0)
            {
                s = c + num1[n - i] - '0';
            }
            else if ( 1 + m - i > 0)
            {
                s = c + num2[m - i] - '0';
            }else{
                s = c;
            }
        }
        if (s > 9)
            c = s / 10;
        else
            c = 0;
        sum[maxLength - i + 1] = '0' + s % 10;
    }
    if(sum[0] == '0' && maxLength + 1 > 1)
        return sum+1;
    else
        return sum;
}
/*
int main(){
    std::cout << "chillin!\n";
}*/