class Solution {
public:
    int maxArea(vector<int>& height) {
        int  n = height.size();
        int maxwater = 0;
        int left = 0;
        int right = n-1;
        while(left<right) {
            int minval = min(height[left],height[right]);
            int base = right - left;
            maxwater = max(maxwater,minval*base);
            if(height[left]<height[right]) {
                left++;
            }else {
                right--;
            }
        }
        return maxwater;
    }
};