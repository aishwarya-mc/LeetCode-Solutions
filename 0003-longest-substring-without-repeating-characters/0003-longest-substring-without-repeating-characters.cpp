class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left = 0;
        int right = 0;
        int count = 0;
        set<int>st;
        while(right<s.size()) {
            while(st.find(s[right])!=st.end()) {
                st.erase(s[left]);
                left++;
            }

            st.insert(s[right]);
            count = max(count, right-left+1);
            right++;
        }
        return count;
    }
};