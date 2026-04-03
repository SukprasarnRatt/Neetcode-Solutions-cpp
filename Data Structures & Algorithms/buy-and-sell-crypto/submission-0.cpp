class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        vector <int> maxProfit(prices.size());

        for(int i=0; i < prices.size(); i++){
            int max = 0;
            for(int k=i+1; k<prices.size(); k++ ){

                if(prices[k] - prices[i]  > max){
                    max =  prices[k] - prices[i];
                    maxProfit[i] = max;
                }
                


            }
        }
        int max = 0;
        for(int j=0; j< maxProfit.size(); j++ ){
            if(maxProfit[j] > max){
                max = maxProfit[j];
            }
        }

        return max;

    }
};
