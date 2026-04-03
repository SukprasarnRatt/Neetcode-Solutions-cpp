class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

        sort(nums.begin(), nums.end());
        int left;
        int right;
        vector <vector<int>> result;

        for(int i =0; i < nums.size(); i++){
            
            left = i +1;
            right = nums.size() - 1;

            if(i > 0 && (nums[i] == nums[i-1])){
                continue;
            }

            while(left < right){
                if(nums[left] + nums[right] + nums[i] == 0 ){
                    result.push_back({nums[i], nums[left], nums[right]});

                    left++;
                    right--;

                    while((left < right) && (nums[left] == nums[left-1])){
                        left++;
                    }

                    while((left < right) && (nums[right] == nums[right+1])){
                        right--;
                    }
                    
                }

                if(nums[left] + nums[right] + nums[i] > 0){
                    right--;
                }

                if(nums[left] + nums[right] + nums[i] < 0){
                    left++;
                }
            }
        }
        
        return result;
        
    }
};
