class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        
        stack<int> trackTemp;
        vector<int> result(temperatures.size(), 0);

       
        trackTemp.push(0);
        
        for(int i=1; i < temperatures.size(); i++){

            while(!trackTemp.empty() && temperatures[i] > temperatures[trackTemp.top()] ){
                result[trackTemp.top()] = i - trackTemp.top();
                trackTemp.pop();
            }

            trackTemp.push(i);



        }

        return result;
    }
};
