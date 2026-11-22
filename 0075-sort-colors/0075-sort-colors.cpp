class Solution {
public:
    void sortColors(vector<int>& nums) {
        int freq[3] = {0};
        for(int x : nums) {
            freq[x]++;
        }


        int i = 0;
        for(int x = 0 ;x < 3;x++) {
            for(int j = 0; j< freq[x];j++) {
                nums[i] = x;
                i++;
            }
        }
    }
};