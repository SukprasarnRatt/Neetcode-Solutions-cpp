class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {

        std::set<int> check;

        for (size_t i = 0; i < nums.size(); ++i){

            if (check.find(nums[i]) != check.end()){
                return true;
            }else{

                check.insert(nums[i]);
            }
        }
        return false;



    }
};
