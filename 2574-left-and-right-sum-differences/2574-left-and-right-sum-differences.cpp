class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int>ans;
        int n = nums.size();
        for(int i=-0;i<n;i++) {
            int lsum = 0;
            int rsum = 0;

            for(int j=0;j < n;j++) {
                if(j < i) {
                    lsum +=nums[j];
                } else if(j > i) {
                    rsum += nums[j];
                }
            }
            ans.push_back(abs(lsum-rsum));
        }

        return ans;
    }
};