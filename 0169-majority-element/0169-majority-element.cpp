class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>map;
        for(int val:nums) {
            map[val]++;
        }
    int maxi = 0;
        for(auto x:map) {
            maxi = max(maxi,x.second);
        }
    int ans;
    for(auto x:map) {
        if(maxi == x.second) {
            ans = x.first;
        }
    }

    return ans;
    }
};