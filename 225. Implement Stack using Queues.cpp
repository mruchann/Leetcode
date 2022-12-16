class MyStack {
public:
    queue<int> q;
    int size;

    MyStack(): size(0) {}
    
    void push(int x)
    {
        q.push(x);
        size++;    
    }
    
    int pop() 
    {
        int x = top();
        for (int i = 0; i < size -1; i++)
        {
            q.push(q.front());
            q.pop();
        }
        q.pop();
        size--;
        return x;
    }
    
    int top() 
    {
        return q.back();
    }
    
    bool empty() 
    {
        return q.empty();
    }
};

/*
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
*/
