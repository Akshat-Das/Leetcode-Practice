class MyQueue {
     stack<int> s1,s2;
public:
    MyQueue() {
    }
    
    void push(int x) {
        while(!empty()){
            s2.push(s1.top());
            s1.pop();
        }
        //push item into s1
        s1.push(x);
        //push everything back to s1
        while(!s2.empty()){
            s1.push(s2.top());
            s2.pop();
        }
    }
    int pop() {
         if(empty()){
            return -1;
        }
        int top=peek();
        s1.pop();
        return top;
    }
    int peek() {
        int t=s1.top();
        return t;
    }
    bool empty() {
        if(s1.empty())
            return true;
        return false;
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