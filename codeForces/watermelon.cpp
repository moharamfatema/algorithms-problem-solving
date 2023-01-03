// https://codeforces.com/contest/4/submission/187616505

# include <iostream>
using namespace std;
 
int main(){
    int w;
    cin >> w;
    
    int even = w % 4;
    if (w < 4 || even % 2 != 0)
        cout << "NO";
    else{
        cout << "YES";
    }
    
}
