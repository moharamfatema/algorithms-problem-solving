# include <iostream>

using namespace std;

int main(){
    int n, k, currentScore , kScore, count = 0;
    
    cin >> n;
    cin >> k;
    
    for(int i = 0; i < n; ++i){
        cin >> currentScore;
        count ++;
        if(currentScore < 1){
            count --;
            break;
        }
        if (i + 1 == k)
            kScore = currentScore;
        else if (i + 1 > k && currentScore != kScore)
        {
            count --;
            break;
        }            
    }
    cout << count;
    return 0;
}
