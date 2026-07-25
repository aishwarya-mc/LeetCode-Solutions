class Solution {
public:
    int maxProduct(int n) {
        vector<int>nums;
        while(n!=0) {
            int lastdig = n%10;
            nums.push_back(lastdig);
            n = n/10;
        }
        int ans = 0;
        for(int i=0;i<nums.size();i++) {
            int j = i+1;
            if(j > nums.size()) break;
            while(j < nums.size()) {
                int prod = nums[i] * nums[j];
                ans = max(ans,prod);
                j++;
            }
        }

        return ans;
    }
};