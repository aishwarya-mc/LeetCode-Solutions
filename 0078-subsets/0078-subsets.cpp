class Solution {
public:
    vector<vector<int>>ans;
    void solve(int ids, vector<int>&nums,vector<int>&temp) {
        if(ids == nums.size()) {
            ans.push_back(temp);
            return;
        }

        temp.push_back(nums[ids]);
        solve(ids + 1,nums,temp);
        temp.pop_back();
        solve(ids + 1,nums,temp);
    }


    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>temp;
        solve(0,nums,temp);
        return ans;
    }
};