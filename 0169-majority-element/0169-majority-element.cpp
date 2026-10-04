class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0;
        int candidate = 0;

        for(int val:nums) {
            if(count == 0) {
                candidate = val;
            }

            if(candidate == val) {
                count++;
            } else {
                count--;
            }
        }

        return candidate;
    }
};