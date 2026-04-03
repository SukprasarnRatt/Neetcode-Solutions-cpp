class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {

        unordered_map <int, int> dict;

        for(int i=0; i < numbers.size(); i++){

            dict[numbers[i]] = i;
        }

        int compliment = 0;

        for(int j=0; j < numbers.size(); j++){

            if((dict.find(target - numbers[j]) != dict.end()) && (j != dict[target - numbers[j] ])){

                return {j+1, dict[target - numbers[j]]+1};
            }

        }
        

        
    }
};
