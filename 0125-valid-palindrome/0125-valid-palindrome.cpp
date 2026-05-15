class Solution {
public:
    bool isPalindrome(string s) {
        int l = 0;
        int r = s.length()-1;
        while(l<r) {
            if(l<r && !isalnum(s[l])) {
                l++;
            }
            if(l<r && !isalnum(s[r])) {
                r--;
            }
            if(s[l]!=s[r]) {
                return false;
            }
        }
        return true;
    }
};