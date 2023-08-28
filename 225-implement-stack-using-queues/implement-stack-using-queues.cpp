class MyStack {
public:
    queue<int> q1, q2;
    MyStack() {
        
    }
    
    void push(int x) {  
        q1.push(x);
    }
    
    int pop() {
       int n = q1.size();
       for(int i=0;i<n-1;i++){
           q2.push(q1.front());
           q1.pop();
       }

       int x = q1.front();
       q1.pop();
       swap(q1, q2);
       return x;
    }
    
    int top() {
        return q1.back();
    }
    
    bool empty() {
        return q1.empty();
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