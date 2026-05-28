class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int, int> m1;
        int n = nums.size();
        int target = n / 2;
        int ans = -1;
        for(int val:nums)
        {
            m1[val]++;
        }

        for(auto &it:m1)
        {
            if(it.second>target)
            {
                ans=it.first;
            }
        }
        return ans;
    }
};