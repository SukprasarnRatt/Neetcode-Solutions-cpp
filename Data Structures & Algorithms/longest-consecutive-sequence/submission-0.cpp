class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        unordered_set <int> consecCheck;

        for(int i: nums){

            consecCheck.insert(i);
        }

        int longestSec = 0;

        for (int i: nums){

            if((consecCheck.find(i) != consecCheck.end()) && (consecCheck.find(i-1) == consecCheck.end())){
                int firstNum = i;
                int longestCount = 1;
                while(true){
                    firstNum += 1;
                    if(consecCheck.find(firstNum) != consecCheck.end()){
                        longestCount++;
                    }else{
                        break;
                    }
                    
                }

                if(longestCount > longestSec){
                    longestSec = longestCount;
                }


            }
        }



        return longestSec;

        
    }
};
