class Solution {
public:
    string longestPalindrome(string s) {
        
        int start = 0;
        int maxlen = 1;
        int n = s.length();
        if(n<=1) return s;
        for(int i=0;i<n;i++) {
            int left = i;
            int right = i;
            while(left >=0 && right<n && s[left] == s[right] ) { 
                int len = right - left + 1;
                if(len > maxlen) {
                    maxlen = len;
                    start = left;
                }
                left--;
                right++;
            }

            left = i;
            right = i+1;
             while(left >=0 && right<n && s[left] == s[right] ) { 
                int len = right - left + 1;
                if(len > maxlen) {
                    maxlen = len;
                    start = left;
                }
                left--;
                right++;
            }      
        
    }
    return s.substr(start,maxlen);
    }
};