class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        if(nums.size() == 0) return false;
        unordered_map<int,int>idx;
        for(int val:nums) {
            idx[val]++;
        }
        for(auto it:idx) {
            if(it.second >= 2 ) return true;
        }
        return false;
    }
};