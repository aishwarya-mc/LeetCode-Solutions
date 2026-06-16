class Solution {
public:
    string convert(string s, int numrows) {
        if(numrows == 1 || numrows >= s.length()) {
            return s;
        }

        bool down = true;
        vector<string>rows(numrows);
        int row = 0;
        for(char ch:s) {
            rows[row] +=ch;
            if(row == 0) 
                down = true;
            else if(row == numrows-1) 
                down = false;

        if(down) 
            row++;
        else
            row--;
        }

        string ans = "";
        for(string st:rows){
            ans+=st;
        }

        return ans;
    }
};