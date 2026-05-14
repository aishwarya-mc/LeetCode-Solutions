class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length()!=t.length()) return false;

        unordered_map<int,int>ans;
        for(char c:s) {
            ans[c]++;
        }
        for(char c:t) {
            ans[c]--;
        }

        for(auto it:ans) {
            if(it.second!=0) return false;
        }
return true;
    }
};