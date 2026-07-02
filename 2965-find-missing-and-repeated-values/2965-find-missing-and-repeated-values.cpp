class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        vector<int>ans;
        vector<int>freq(n*n+1);

        for(auto row:grid) {
            for(int val:row) {
                freq[val]++;
            }
        }

        int repeat = -1;
        int missing =  -1;
        for(int i=1;i<=n*n;i++) {
            if(freq[i]==2) {
                repeat = i;
            }

            if(freq[i] == 0) {
                missing = i;
            }
        }

        ans.push_back(repeat);
        ans.push_back(missing);
        return ans;
        
    }
};