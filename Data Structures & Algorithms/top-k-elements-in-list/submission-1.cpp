class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        unordered_map <int, int> countNum;

        for(int i: nums){
            countNum[i]++;
        }

        vector <pair<int, int>> freq;

        for(auto &j: countNum){
            freq.push_back(j);
        }

        sort(freq.begin(), freq.end(),
            [](auto &a, auto &b){
                return a.second > b.second;
            });

        vector <int> result;
        for(int b = 0; b < k; b++){

            result.push_back(freq[b].first);
        }

        return result;
        
    }
};
