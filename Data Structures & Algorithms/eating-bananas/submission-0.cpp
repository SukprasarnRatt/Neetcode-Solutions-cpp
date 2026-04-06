class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {

        int left = 1;
        int right = *max_element(piles.begin(), piles.end());
        int totalHours, mid;
        int minimumK = INT_MAX;

        while(left <= right){
            totalHours = 0;
            mid = left + (right - left)/ 2;
            for(int i =0; i < piles.size(); i++){
                if(piles[i] % mid == 0){

                    totalHours = totalHours + (piles[i]/ mid);

                }else if(piles[i] % mid != 0){

                    totalHours = totalHours + (piles[i]/ mid) + 1;
                }
            }

            if(totalHours > h){
                left = mid + 1;
            }else if(totalHours <= h){
                if(mid < minimumK){
                    minimumK = mid;
                }
                right = mid - 1 ;
            }

        }

        return minimumK;
        
    }
};
