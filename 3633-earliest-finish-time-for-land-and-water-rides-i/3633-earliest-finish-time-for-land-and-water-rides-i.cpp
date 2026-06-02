class Solution {
public:
    int earliestFinishTime(vector<int>& landS, vector<int>& landD, vector<int>& waterS, vector<int>& waterD) {
        int ans = INT_MAX;
        int n = landS.size();
        int m = waterS.size();
        for(int i=0;i<n;i++) {
            for(int j = 0; j < m;j++) {
                int landfinish = landS[i] + landD[i];
                int waterstart = max (landfinish,waterS[j]);
                int finish1 = waterstart + waterD[j];
                int waterfinish = waterS[j] + waterD[j];
                int landstart = max (landS[i],waterfinish); 
                int finish2 =landstart + landD[i];
                ans = min (ans, finish1);
                ans = min(ans,finish2);
            }
        }
        
        return ans;
    }
};