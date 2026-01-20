class MinStack {
public:
    stack<pair<int,int>> ros;
    MinStack() {
        
    }

    void push(int val) {
       if(ros.empty()){
        ros.push({val,val});
       } else {
        ros.push({val,min(val,ros.top().second)});
       }
        
    }
    
    void pop() {
        ros.pop();
    }
    
    int top() {
        return ros.top().first;
       
    }
    
    int getMin() {
        return ros.top().second;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */