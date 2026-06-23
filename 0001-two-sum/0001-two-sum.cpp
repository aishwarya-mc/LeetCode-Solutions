class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++) {
            int curr = nums[i];
            int needed = target - curr;
            if(mp.find(needed)!=mp.end()) {
                return {mp[needed],i};
            }


            mp[curr] = i;
        }
        return {};
    }
};