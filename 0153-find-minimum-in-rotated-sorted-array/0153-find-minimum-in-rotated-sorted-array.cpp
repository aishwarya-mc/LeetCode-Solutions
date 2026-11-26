class Solution {
public:
    int findMin(vector<int>& nums) {
        int low = 0;
        int high = nums.size()-1;
        int currmin = INT_MAX;
        while(low <= high) {
            int mid = low + (high-low)/2;
            currmin = min(currmin, nums[mid]);
            if(nums[mid] > nums[high]) {
                low = mid+1;
            } else  {
                high = mid-1;

            }
        }

        return currmin;
        
    }
};