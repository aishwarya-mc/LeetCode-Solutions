class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if (s1.length()>s2.length()) return false;

        vector<int>first(26,0);
        vector<int>wind1(26,0);
        for(char c:s1) {
            first[c - 'a']++;
        }

        int k=s1.length();
        for(int i=0;i<k;i++) {
            wind1[s2[i]-'a']++;
        }
        
        if(first == wind1) return true;

        for(int i=k;i<s2.length();i++) {
            wind1[s2[i]-'a']++;
            wind1[s2[i-k]-'a']--;
            if(first == wind1) {
                return true;
            }
         }

         return false;
    } 
};