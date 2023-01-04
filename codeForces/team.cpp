# include <iostream>
# include <vector>
using namespace std;

int main(){
    int n = 0;
    cin >> n;
    int sure = 0;
    int count = 0;
    vector<int> problems;

    for (int i = 0; i < n; i ++)
    {
        problems.push_back(0);
        for (int j = 0; j < 3; j ++){
            cin >> sure;
            problems[i] += sure;
        }
        if (problems[i] > 1){
            count ++;
        }
    }
    cout << count;
}
