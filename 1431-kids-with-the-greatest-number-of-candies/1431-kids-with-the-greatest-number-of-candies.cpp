class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxval = *max_element(candies.begin(),candies.end());
        vector<bool>res;
        for(int val:candies) {
            res.push_back(val + extraCandies >= maxval);
        }
        return res;
    }
};