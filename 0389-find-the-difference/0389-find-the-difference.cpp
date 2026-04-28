class Solution {
public:
    char findTheDifference(string s, string t) {
        char ans;
        unordered_map<char,int>mp;
        for(char c:t) {
            mp[c]++;
        }
        for(char c:s) {
            mp[c]--;
        }
        for(auto it:mp) {
            if (it.second == 1) return it.first;
        }
        return 0;
    }
};