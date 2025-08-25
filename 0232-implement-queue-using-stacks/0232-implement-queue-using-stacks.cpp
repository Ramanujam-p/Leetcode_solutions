class MyQueue {
public:
vector<int> a;
    MyQueue() {
        
    }
    
    void push(int x) {
        a.push_back(x);
    }
    
    int pop() {
        while(!a.empty())
        {
            int b = a.front();
            a.erase(a.begin());
            return b;
        }
        return -1;
    }
    
    int peek() {
        if(!a.empty())
        return a.front();
        return -1;
    }
    
    bool empty() {
        return a.empty();
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