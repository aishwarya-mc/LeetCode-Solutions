class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>st;
        for(auto token:tokens) {
            if(token != "+" && token != "*" && token!="-" && token!="/") {
                int num = stoi(token);
                st.push(num);
            } else {
                int a  = st.top();
                st.pop();
                int b = st.top();
                st.pop();
                if (token == "+") {
                    st.push(a+b);
                } else if (token == "*") {
                    st.push(a*b);
                } else if( token == "-") {
                    st.push(b-a);
                } else {
                    st.push(b/a);
                }
            }
        }

        return st.top();
    }
};