class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left = 0;
        int right = 0;
        int maxi = 0;
        set<int> cont;
        while(right < s.size()) {
            if(cont.count(s[right]) == 0) {
                cont.insert(s[right]);
                maxi = max(maxi,right-left+1);
                right++;
            } else {
                cont.erase(s[left]);
                left++;
            }
        }

        return maxi;
        
    }
};