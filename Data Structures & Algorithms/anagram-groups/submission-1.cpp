
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        // take m*nlogn
        // vector<string> sortedString = strs;
        // for(int i=0; i < sortedString.size(); i++){
        //     sort(sortedString[i].begin(), sortedString[i].end());
        // }

        // unordered_map <string, vector<string>> storage;

        // for(int i=0; i < sortedString.size(); i++){

        //     storage[sortedString[i]].emplace_back(strs[i]);

            
        // }

        // vector<vector<string>> result;

        // for(const auto& pair : storage){
        //     result.emplace_back(pair.second);
        // }

        // return result;

        vector<vector<string>> result;
        
        unordered_map<string, vector<string>> storage;

        for (int i = 0; i < strs.size(); i++) {
            // Initialize a frequency vector for the current string
            vector<int> wordKey(26, 0);
            // Fill the frequency vector for the current string
            for (int j = 0; j < strs[i].length(); j++) {
                wordKey[strs[i][j] - 'a']++;
            }
            // cocate all integer of vector into a string to be uniqe key
            // For example "0001002001"

            string key = "";

            for(int k = 0; k<26; k++){
                key = key + to_string(wordKey[k]) + "#";
            }

            // Store the string in the map using the frequency vector as the key
            storage[key].emplace_back(strs[i]);
        }

        // Collect all groups of anagrams from the map
        for (const auto& pair : storage) {
            result.emplace_back(pair.second);
        }

        return result;






        
    }
};
