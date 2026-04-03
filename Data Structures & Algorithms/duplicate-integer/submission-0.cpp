class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {

        unordered_map <int, int> duCheck;

        for(int i=0; i<nums.size(); i++){
            if(duCheck.find(nums[i]) != duCheck.end()){
                return true;
            }else{
                duCheck[nums[i]] = 1;
            }

        }

        return false;



    }
};
