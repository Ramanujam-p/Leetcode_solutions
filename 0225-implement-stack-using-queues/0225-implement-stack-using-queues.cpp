class MyStack {
public:
    vector<int> a;
    MyStack() {
        
    }
    
    void push(int x) {
        a.push_back(x);
    }
    
    int pop() {
        while(!a.empty())
        {
            int b = a.back();
            a.pop_back();
            return b;
        }
        return -1;
    }
    
    int top() {
        if(!a.empty())
        return a.back();
        return -1;
    }
    
    bool empty() {
        return a.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */