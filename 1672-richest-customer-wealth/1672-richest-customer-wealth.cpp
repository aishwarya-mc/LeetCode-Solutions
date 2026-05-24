class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int max_sum = INT_MIN;
       
        for(int i = 0;i < accounts.size();i++) {
             int sum = 0;
            for(int j = 0; j< accounts[i].size();j++) {
                 sum += accounts [i][j];
            }
            max_sum = max(max_sum,sum);
        }
        return max_sum;
        
    }
};