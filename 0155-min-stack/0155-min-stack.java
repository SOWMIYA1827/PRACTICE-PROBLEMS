class MinStack {

    Stack<Integer> mainstack ;
    Stack<Integer> ministack;

    public MinStack() {
        mainstack = new Stack<>();
        ministack = new Stack<>();
    }
    
    public void push(int value) {
    
        if(ministack.isEmpty() || ministack.peek() >= value){
             ministack.push(value);
        }
            mainstack.push(value);
    }
    
    public void pop() {
        if(mainstack.peek().equals(ministack.peek())){
            ministack.pop();
        }
        mainstack.pop();
    }
    
    public int top() {
       return  mainstack.peek();
    }
    
    public int getMin() {
        return ministack.peek();
    }
}

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack obj = new MinStack();
 * obj.push(value);
 * obj.pop();
 * int param_3 = obj.top();
 * int param_4 = obj.getMin();
 */