class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double sum = 0; 
        for(int i = 0;i<=k-1;i++) {
            sum +=nums[i];
        }
        double favg = sum/k;


        for(int i = k;i<nums.size();i++) {
            sum += nums[i];
            sum -= nums [i-k];
            favg = max(favg, sum/k);
        }

        return favg;
    }
};