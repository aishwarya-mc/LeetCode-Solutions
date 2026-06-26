class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        vector<int>arr;
        for(auto row:matrix) {
            for(int val:row) {
                arr.push_back(val);
            }
        }

        int low = 0;
        int high = arr.size()-1;
        while(low<=high) {
            int mid = low + (high-low)/2;
            if(arr[mid] == target) {
                return true;
            } else if(arr[mid] < target) {
                low = mid+1;
            } else {
                high = mid-1;
            }
            }

            return false;
        }
};