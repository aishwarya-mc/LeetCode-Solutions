class Solution {
public:
    vector<vector<int>>ans;
    vector<vector<int>> perm(vector<int>&nums,vector<int>&temp,vector<bool>&track) {
        if(temp.size() == nums.size()) {
            ans.push_back(temp);
            return ans;
        }
        for(int i = 0;i<nums.size();i++) {
            if(track[i]) {
                continue;
            }

        temp.push_back(nums[i]);
        track[i] = true;
        perm(nums,temp,track);
        temp.pop_back();
        track[i] = false;

        }

       return ans;
    }



    vector<vector<int>> permute(vector<int>& nums) {
        vector<int>temp;
        int n = nums.size();
        vector<bool>track(n,false);
        vector<vector<int>>final = perm(nums,temp,track);
        return final;
    }
};