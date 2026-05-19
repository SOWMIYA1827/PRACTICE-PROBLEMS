class MyStack {
public:
    stack<int> example ;
    MyStack() {
        
    }
    
    void push(int x) {
        example.push(x);
    }
    
    int pop() {
        int y = example.top();
        example.pop();
        return y ;
    }
    
    int top() {
        return example.top();
    }
    
    bool empty() {
        return example.empty();
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