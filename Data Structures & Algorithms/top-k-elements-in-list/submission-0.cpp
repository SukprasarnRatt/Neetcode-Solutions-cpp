class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        vector<int> result;

        unordered_map<int, int> countFreq;

        for(int num : nums){

            countFreq[num]++;
        }

        vector<vector<int>> store(nums.size()+1);

        for(const auto& pair: countFreq){
            store[pair.second].emplace_back(pair.first);
        }

        for(int j=store.size()-1; j >= 0; --j){
            for(const auto& element : store[j] ){
                if(result.size() < k){
                    result.emplace_back(element);
                }else{
                    return result;
                }
            }

        }
        return result;
        
    }
};
