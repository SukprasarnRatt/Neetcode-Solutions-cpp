class Solution {
public:
    bool isValid(string s) {

        if(s.size() % 2 !=0){
            return false;
        }
        stack<char> check;

        for(char bracket: s){

            if(bracket == '[' or bracket == '(' or bracket == '{'){
                check.push(bracket);
            }else{

                if(check.empty()){
                    return false;
                }

                if(bracket == ']' and check.top() == '['){
                    check.pop();   
                }else if(bracket == ')' and check.top() == '('){
                    check.pop(); 

                }else if(bracket == '}' and check.top() == '{'){
                    check.pop(); 
                }else{
                    return false;
                }
                
                
            }
        }

        if(check.empty()){
            return true;
        }else{
            return false;
        }

        
    }
};
