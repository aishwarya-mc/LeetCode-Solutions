class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {
        int n = grid.size();
        if(n == 0) return 0;

        vector<priority_queue<int>>pqs;
        for(auto &rows:grid) {
            priority_queue<int>pq;
            for(int val:rows) {
                pq.push(val);
            }

            pqs.push_back(pq);
        }

    int ans = 0;
    while(true) {
        int maxi = 0;
        bool nemp = false;
        for(int i=0;i<pqs.size();i++) {
            if(!pqs[i].empty()) {
                nemp =true;
                maxi = max(maxi,pqs[i].top());
            }
        }

        if(!nemp) break;

        for(int i=0;i<pqs.size();i++) {
            if(!pqs[i].empty()) {
                pqs[i].pop();
            }
        }
        ans +=maxi;

    }

return ans;
    }
};