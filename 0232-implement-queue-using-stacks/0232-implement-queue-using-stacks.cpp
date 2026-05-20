class MyQueue {
public:
    stack<int>st;
    stack<int>revst;
    MyQueue() {
        
    }
    
    void push(int x) {
        st.push(x);
    }
    
    int pop() {
        if (revst.empty()) {
            while(!st.empty()) {
                int val = st.top();
                st.pop();
                revst.push(val);
            }
        }
        int front = revst.top();
        revst.pop();
    
        return front;

    }
    
    int peek() {
        if(revst.empty()) {
            while(!st.empty()) {
                int val = st.top();
                st.pop();
                revst.push(val);
            }
        }
        return revst.top();
    }
    
    bool empty() {
        return st.empty() && revst.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */