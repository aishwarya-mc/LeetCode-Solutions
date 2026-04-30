class Solution {
public:
    int findMaxK(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int l=0;
        int r = nums.size()-1;
        int maxx = -1;

        while(l<r) {
            if(nums[l]+nums[r]==0) {
                maxx = max(maxx,nums[r]);
                r--;
                l++;
            }
            else if(nums[l]+nums[r]<0) {
                l++;
            }else {
                r--;
            }

        }
        return maxx;
    }
};