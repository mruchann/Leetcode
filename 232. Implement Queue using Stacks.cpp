class MyQueue {
public:
    stack<int> front, back;

    MyQueue() {}
    
    void push(int x) 
    {
        back.push(x);
    }
    
    int pop() 
    {
        int x = peek();
        front.pop();
        return x;
    }
    
    int peek() 
    {
        if(front.empty())
            while (!back.empty())
            {
                front.push(back.top());
                back.pop();
            }
        return front.top();
    }
    
    bool empty() 
    {
        return front.empty() && back.empty();
    }
};

/*
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
*/
