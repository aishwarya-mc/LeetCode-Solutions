class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mi;
        for(int i = 0;i<nums.size();i++) {
            int ans = target - nums[i];

            if(mi.find(ans)!=mi.end()) {
                return {mi[ans],i};
            }

            mi[nums[i]]=i;
        }
        return {};
    }
};