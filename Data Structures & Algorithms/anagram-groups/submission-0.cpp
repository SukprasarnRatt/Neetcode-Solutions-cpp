class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        vector<string> sortedString = strs;
        for(int i=0; i < sortedString.size(); i++){
            sort(sortedString[i].begin(), sortedString[i].end());
        }

        unordered_map <string, vector<string>> storage;

        for(int i=0; i < sortedString.size(); i++){

            storage[sortedString[i]].emplace_back(strs[i]);

            
        }

        vector<vector<string>> result;

        for(const auto& pair : storage){
            result.emplace_back(pair.second);
        }

        return result;






        
    }
};
