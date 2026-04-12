class TimeMap {
public:
    TimeMap() {
        
    }

    unordered_map <string, vector< pair <int, string>>> timeStampStorage;
    
    void set(string key, string value, int timestamp) {

        timeStampStorage[key].push_back({timestamp, value});
    }
    
    string get(string key, int timestamp) {

        vector< pair <int, string>> valueCheck = timeStampStorage[key];

        int left = 0;
        int right = valueCheck.size() - 1;
        string result = "";
        int mid;

        while(left <= right){

            mid = left + (right-left)/2;

            if(valueCheck[mid].first > timestamp){

                right = mid - 1;

            }else if(valueCheck[mid].first <= timestamp){

                left = mid + 1;
                result = valueCheck[mid].second;


            }

        }

        return result;
        
    }
};
