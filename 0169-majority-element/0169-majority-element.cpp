class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int times = nums.size()/2;
        int appears = 0;
        int value;
        unordered_map<int,int>mp;
        for(int val:nums) {
            mp[val]++;
        }

        for(auto it: mp) {
            if(it.second > times) {
                appears = max(appears,it.second);
                value = it.first;
            }
            
        }

        return value;
        
    }
};