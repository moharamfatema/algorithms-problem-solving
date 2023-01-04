// https://leetcode.com/problems/minimum-rounds-to-complete-all-tasks/submissions/871133229/

class Solution {
private:
    int factors(int tasks){
        // keep taking threes until its five or less
        int rounds = 0;
        while(tasks){
            if (tasks >= 5){
                rounds ++;
                tasks -= 3;
            }else{
                if(tasks == 3 || tasks == 2)
                    return rounds +1;
                else if(tasks % 2 == 0){
                    return rounds + tasks / 2;
                }
                else{
                    return -1;
                }
            }
        }
        return rounds;
    }
public:
    int minimumRounds(vector<int>& tasks) {
        // one linear pass to count difficulty levels in a hash
        map<int,int> hash;
        
        for(int t: tasks)
        {
            auto it = hash.find(t);
            if (it != hash.end())
            {
                //found
                hash[t] ++;
            }else{
                //not found
                hash[t] = 1;
            }
        }
        
        // counting rounds for each difficulty level
        int rounds = 0;
        int fac;
        for (auto it = hash.begin(); it != hash.end(); it ++)
        {
            fac = factors(it->second);
            if (fac == -1){
                return -1;
            }
            rounds += fac;
        }
        return rounds;
    }
};
