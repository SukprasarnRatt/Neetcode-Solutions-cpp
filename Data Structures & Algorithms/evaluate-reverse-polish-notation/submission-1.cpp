class Solution {
public:
    int evalRPN(vector<string>& tokens) {

        stack<int> calculator;
        char operation;
        int first;
        int second;
        int result;

        for(int i = 0; i < tokens.size(); i++){

            if(tokens[i] != "+" and tokens[i] != "-" and tokens[i] != "*" and tokens[i] != "/"){

                calculator.push(stoi(tokens[i]));
            }else{

                first = calculator.top();
                calculator.pop();
                second = calculator.top();
                calculator.pop();

                if(tokens[i] == "+"){

                    result = second + first;

                }else if(tokens[i] == "-"){

                    result = second - first;

                }else if(tokens[i] == "*"){

                    result = second * first;

                }else if(tokens[i] == "/"){

                    result = second / first;

                }
        

                calculator.push(result);



            }
        }

        return calculator.top();
        
    }
};
