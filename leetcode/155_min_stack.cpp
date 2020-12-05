class MinStack {
public:
    vector<int> s;
    vector<int> min;
    
    MinStack() {}
    
    void push(int x) {
        s.insert(s.begin(), x);
        
        if (min.empty() || x <= min[0])
            min.insert(min.begin(), x);
    }
    
    void pop() {
        if (s[0] <= min[0])
            min.erase(min.begin());
        
        s.erase(s.begin());
    }
    
    int top() {
        return s[0];
    }
    
    int getMin() {
        return min[0];
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
