class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        for(int val:nums) {
            mp[val]++;
        }
        priority_queue<pair<int,int>>poq;
        for(auto it:mp) {
            poq.push({it.second,it.first});
        }
        vector<int>ans;

        while(k--) {
            ans.push_back(poq.top().second);
            poq.pop();
        }

        return ans;
    }
};