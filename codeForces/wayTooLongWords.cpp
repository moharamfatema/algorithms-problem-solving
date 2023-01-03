#include <iostream>

int main() {
    int n = 0;
    int len;
    std::cin >> n;
    std::string s, newS;
    for (int i = 0; i < n; i++)
    {
        std::cin >> s;
        len = s.size();
        if (len > 10)
        {
            std::cout <<  s[0] << len - 2 << s[len - 1] << "\n";
        }else
            std::cout <<  s << "\n";
    }
}
