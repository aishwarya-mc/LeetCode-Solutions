class Solution {
public:
    double trimMean(vector<int>& arr) {
        int removal = arr.size() * 5/100;
        double sum=0,count = 0;
        sort(arr.begin(),arr.end());
        for(int i = removal;i < arr.size()-removal;i++) {
            sum +=arr[i];
            count++;
        } 
        double mean  = sum/count;
        return mean;
        
    }
};