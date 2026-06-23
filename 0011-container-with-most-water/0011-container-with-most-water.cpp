class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size()-1;
        int maxwater = 0;
        while(left < right) {
            int minvalue = min(height[left],height[right]);
            int base = right-left;
            maxwater = max(maxwater,minvalue*base);

            if(height[left] < height[right] ) {
                left++;
            } else {
                right--;
            }
        }

        return maxwater;
        
    }
};