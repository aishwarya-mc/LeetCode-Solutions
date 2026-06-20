class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        vector<int>ans;
        vector<int>freq(n*n+1);

        for(auto num:grid) {
            for(int val:num){
                freq[val]++;
            }
        }


        int repeated = -1;
        int missing = -1;
        for(int i = 0;i<n*n+1;i++) {
            if(freq[i] == 2) {
                repeated = i;
            }

            if(freq[i] == 0) {
                missing = i;
            }

        }
        ans.push_back(repeated);
        ans.push_back(missing);

        return ans;
        
    }
};