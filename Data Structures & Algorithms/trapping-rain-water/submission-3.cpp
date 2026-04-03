class Solution {
public:
    int trap(vector<int>& height) {

        vector <int> left (height.size());
        vector <int> right (height.size());

        int sumTrap = 0;
        left[0] = 0;
        right[height.size() - 1] = 0;

        int maxLeft= 0;
        int maxRight = 0;
        for(int i = 0; i < height.size(); i++){
            if(height[i] > maxLeft){

                left[i] = maxLeft;
                maxLeft = height[i];
                
            }else{
                left[i] = maxLeft;
            }

        }

        for(int j = height.size() - 1; j >= 0; j--){
            if(height[j] > maxRight){

                right[j] = maxRight;
                maxRight = height[j];
                
            }else{
                right[j] = maxRight;
            }

        }

        for(int k = 1; k < height.size(); k++){
        

            if(min(left[k], right[k]) - height[k] > 0){

                sumTrap += min(left[k], right[k]) - height[k];

            }
        }

        return sumTrap;
    }
};
