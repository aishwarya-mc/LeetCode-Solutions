class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>ans;
        int p=0,n=0;
        while(p<nums.size() && n<nums.size()) {
            while(p<nums.size() && nums[p]<0) p++;
            while(n<nums.size() && nums[n]>=0)n++;

            if(p<nums.size()) ans.push_back(nums[p++]);
            if(n<nums.size()) ans.push_back(nums[n++]);
        }
        return ans;
    }
};