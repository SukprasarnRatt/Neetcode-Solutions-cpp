class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {


        vector <pair<int, int>> carTracking;

        for(int i =0; i < position.size(); i++){
            carTracking.push_back({position[i], speed[i]});
        }

        sort(carTracking.begin(), carTracking.end(), [](auto& a, auto& b){
            return a.first > b.first;
        });

        double totalTime = 0;
        // time = distance / speed
        // time = target - position / speed

        stack <float> feetChecks;
        int feetCount = 0;

        for(int j = 0; j < carTracking.size(); j++){

            double totalTime = (double)(target - carTracking[j].first) / carTracking[j].second;
            if(feetChecks.empty()){
                feetChecks.push((totalTime));
                feetCount++;
            }else if(totalTime > feetChecks.top()){
                feetChecks.pop();
                feetChecks.push((totalTime));
                feetCount++;
            }
        }
        
        return feetCount;
        
    }
};
