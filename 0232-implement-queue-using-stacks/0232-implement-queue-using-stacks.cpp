class MyQueue {
public:
    queue<int> myqueue;
    MyQueue() {
        
    }
    
    void push(int x) { 
        myqueue.push(x);
        
    }
    
    int pop() {
        int x = myqueue.front();
        myqueue.pop();
         return x;
    }
    
    int peek() {
           return myqueue.front();
    }
    
    bool empty() {
      return myqueue.empty();
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