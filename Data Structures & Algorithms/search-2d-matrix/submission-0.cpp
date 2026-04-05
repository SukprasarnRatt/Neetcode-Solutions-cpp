class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {

        int left;
        int right, mid;

        for(int i = 0; i < matrix.size(); i++){
            left = 0;
            right = matrix[i].size() - 1;
            while(left <= right){
                if(target > matrix[i][right]){
                    break;
                }else{

                    mid = (left + right) / 2;

                    if(matrix[i][mid] == target){
                        return true;
                    }else if(matrix[i][mid] < target){
                        left = mid + 1;
                    }else if(matrix[i][mid] > target){
                        right = mid -1;

                    }

                }
            }
        }

        return false;
        
    }
};
