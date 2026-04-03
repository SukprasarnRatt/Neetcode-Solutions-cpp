class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {

        unordered_set<int> dupCheck;

        for (auto i=0; i < nums.size(); i++ ){
            if (dupCheck.find(nums[i]) != dupCheck.end()){ // check if number is already in the set or not
                return true;
            }else{
                dupCheck.insert(nums[i]);
            
            }
        }
        return false;

        
    }
};