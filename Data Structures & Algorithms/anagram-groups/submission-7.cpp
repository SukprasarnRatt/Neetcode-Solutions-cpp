class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        vector <vector<string>> result;
        unordered_map <string, vector <string>> storage;

        for(string original: strs){

            string sorted = original;
            sort(sorted.begin(), sorted.end());

            storage[sorted].push_back(original);
            
        }

        for(auto &key: storage){
            result.push_back(key.second);
        }


        return result;
        
    }
};
