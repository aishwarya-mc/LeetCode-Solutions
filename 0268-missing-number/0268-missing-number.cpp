class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int xor_all=0;
        int xor_nums=0;
        int n=nums.size();
        for(int i=0;i<=n;i++)
        {
            xor_all^=i;
        }
        for(int val:nums)
        {
            xor_nums^=val;
        }
        return xor_all ^ xor_nums;
        
    }
};