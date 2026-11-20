class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int right = 0;
        int currsum = 0;
        int maxi = INT_MIN;
        while(right < nums.size()) {
            currsum += nums[right];
            maxi = max(currsum,maxi);

            if(currsum < 0) {
                currsum = 0;
            }
            right++;
        }

        return maxi;
        
    }
};