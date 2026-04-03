class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        unordered_map<int, int> dict;
        for(size_t i = 0; i < nums.size(); ++i){

            dict[nums[i]] = i;

        }

        vector<int> result;
        for(size_t i = 0; i < nums.size(); ++i){

            if (dict.count(target - nums[i]) > 0 && i != dict[target - nums[i]]){

                result.push_back(i);
                result.push_back(dict[target - nums[i]]);
                return result;
            }

        }

        
    }


    
};
