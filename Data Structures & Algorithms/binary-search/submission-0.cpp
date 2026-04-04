class Solution {
public:
    int search(vector<int>& nums, int target) {

        // Scanning array once will take O(n)
        // Array is alredy sorted: Strat at the middle

        int left = 0;
        int right = nums.size() - 1;
        int mid = 0;

        while(left <= right){
            mid = (left + right)/2;
            if((nums[mid] != target) && (nums[mid] < target)){

                left = mid + 1;

            }else if((nums[mid] != target) && (nums[mid] > target)){

                right = mid - 1;

            }else if(nums[mid] == target){

                return mid;
            }
        }

        return -1;

        
    }
};
