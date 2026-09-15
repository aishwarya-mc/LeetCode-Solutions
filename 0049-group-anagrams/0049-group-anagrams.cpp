class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
       unordered_map<string, vector<string>> anagramMap;
       vector<vector<string>>ans;

       for(string s:strs) {
        string ss = s;
        sort(ss.begin(),ss.end());
        anagramMap[ss].push_back(s);
       }

       for(auto &x:anagramMap) {
        ans.push_back(x.second);
       }

       return ans;
    }
};