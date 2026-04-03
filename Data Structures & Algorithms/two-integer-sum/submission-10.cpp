// ***** Brute force BigO(N^2)
// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {

//         for (int i=0; i< nums.size(); i++){
//             for(int j= 0; j < nums.size(); j++){

//                 if((nums[i]+nums[j] == target) && (i != j) ){
//                     return {i,j};
//                 }
//             }
//         }
        
//     }
// };


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        unordered_map <int, int> checkNums;

        for(int i=0; i < nums.size(); i++){

            int compliment = target - nums[i];

            if (checkNums.count(compliment)){

                return {checkNums[compliment], i};
            }
            
            if(!checkNums.count(nums[i])){
                checkNums[nums[i]] = i;
            }
            
        } 

        return {};
    }    
    
};

