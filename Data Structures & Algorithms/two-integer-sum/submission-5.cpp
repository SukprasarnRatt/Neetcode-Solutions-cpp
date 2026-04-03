class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        vector<int> result;

        unordered_map<int, queue<int>> dict;

        for(int i=0; i<nums.size(); i++ ){

            dict[nums[i]].push(i);            
        }
        // have dict that contain all numbers and their indexes in que
        for(int i=0; i < nums.size(); i++){
            if( dict.count((target - nums[i])) && nums[i] != target - nums[i]){
                result.emplace_back(dict[nums[i]].front());
                dict[nums[i]].pop();
                result.emplace_back(dict[target - nums[i]].front());
                dict[target - nums[i]].pop();
                return result;    
            }else if(nums[i] == target - nums[i] && dict[nums[i]].size()>1){
                result.emplace_back(dict[nums[i]].front());
                dict[nums[i]].pop();
                result.emplace_back(dict[target - nums[i]].front());
                dict[target - nums[i]].pop();
                return result;

            }
        }
        return result;


        
    }
};
