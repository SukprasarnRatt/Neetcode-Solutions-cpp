class MinStack {
public:

    stack <int> normalStack;

    stack <int> trackMin;


    MinStack() {
        
    }
    
    void push(int val) {
        normalStack.push(val);
        if(trackMin.empty()){
            trackMin.push(val);
        }else{
            if (val <= trackMin.top()){
                trackMin.push(val);
            }
        }
    }
    
    void pop() {

        if(normalStack.top() == trackMin.top()){
            trackMin.pop();
            normalStack.pop();
        }else{

            normalStack.pop();

        }
        
        
    }
    
    int top() {

        return normalStack.top();


        
    }
    
    int getMin() {
        
        return trackMin.top();
    }
};
