class MinStack {
    private: 
    int mini;
    stack<int> st, minist;
public:
    MinStack() {
        mini = INT_MAX;
    }
    
    void push(int val) {
        st.push(val);
        mini = min(mini,val);
        minist.push(mini);
    }
    void pop() {
        st.pop();
        minist.pop();
        if(st.empty()) mini = INT_MAX;
        else mini = minist.top();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return minist.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
