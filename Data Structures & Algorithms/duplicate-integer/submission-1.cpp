class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {

        // 2 ideas
        //   1. use nested loop keep check all element with each other ( take O(N^2) )
        //.  2. use unorder_map by element as key (take O(1))

        // for(int i=0; i< nums.size(); i++){
        //     for (int j=i+1; j< nums.size(); j++){

        //         if(nums[i] == nums[j]){
        //             return true;
        //         }
        //     }
        // }

        // return false;

        unordered_map<int, int> map;
        for(int i=0; i < nums.size(); i++){
            if(map.count(nums[i]) == 0){ // do not have key
                map[nums[i]] = 1;
            }else{
                return true;
            }
        }
        return false;
    }
};
