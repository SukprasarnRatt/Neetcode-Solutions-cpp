// class Solution {
// public:
//     vector<int> productExceptSelf(vector<int>& nums) {

//         vector <int> result;

//         for(int i = 0; i < nums.size(); i++){

//             int multiply = 1;

//             for(int j = 0; j< nums.size(); j++){

//                 if (j != i){
//                     multiply *= nums[j];
//                 }
//             }

//             result.push_back(multiply);

//         }

//         return result;

//     }
// };



class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        vector <int> result(nums.size());

        vector <int> leftMultiply(nums.size());
        vector <int> rightMultiply(nums.size());

        leftMultiply[0] = 1;
        rightMultiply[nums.size()-1] = 1;


        for(int i = 1; i < nums.size(); i++){

         
            leftMultiply[i] = nums[i-1] * leftMultiply[i-1];
        }

        for(int j = nums.size() - 2 ; j >= 0; j--){

            rightMultiply[j] = nums[j+1] * rightMultiply[j+1];
        }

        for(int k = 0; k < nums.size(); k++){

            result[k] = leftMultiply[k] * rightMultiply[k];
        }

      

        return result;

    }
};
