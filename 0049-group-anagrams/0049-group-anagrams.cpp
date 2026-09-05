class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>map;
        vector<vector<string>>res;

        for(string s: strs) {
            string ss = s;
            sort(ss.begin(),ss.end());
            map[ss].push_back(s);
        }

        for(auto &x: map) {
            res.push_back(x.second);
        }

        return res;
        
    }
};