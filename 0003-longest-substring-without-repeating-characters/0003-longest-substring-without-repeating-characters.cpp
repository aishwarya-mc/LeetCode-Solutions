class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set<char>cs;
        int left = 0;
        int len = 0;

        for(int right=0;right<s.size();right++) {
            while(cs.count(s[right])) {
                cs.erase(s[left]);
                left++;
            }


            cs.insert(s[right]);
            len = max(len,right-left+1);
        }
        return len;
    }
};