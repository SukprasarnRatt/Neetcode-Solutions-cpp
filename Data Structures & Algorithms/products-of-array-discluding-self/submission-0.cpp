class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        vector <int> result;

        for(int i = 0; i < nums.size(); i++){

            int multiply = 1;

            for(int j = 0; j< nums.size(); j++){

                if (j != i){
                    multiply *= nums[j];
                }
            }

            result.push_back(multiply);

        }

        return result;

    }
};
