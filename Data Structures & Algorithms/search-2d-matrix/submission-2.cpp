class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {

        int left = 0;
        int numRow = matrix.size(); // number of row
        int numCol = matrix[0].size(); // number of collumn
        int right = (numRow * numCol) - 1;
        int rowPos, colPos, mid;


        while(left <= right){

            mid = left + (right - left)/2;
            rowPos = mid / numCol;
            colPos = mid % numCol;

            if(matrix[rowPos][colPos] > target){
                right = mid - 1;
            }else if(matrix[rowPos][colPos] < target){
                left = mid + 1;
            }else if (matrix[rowPos][colPos] == target){
                return true;
            }


            
        }

        return false;
        
    }
};
