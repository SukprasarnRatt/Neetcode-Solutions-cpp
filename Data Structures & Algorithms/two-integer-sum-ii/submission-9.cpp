// class Solution {
// public:
//     vector<int> twoSum(vector<int>& numbers, int target) {

//         unordered_map <int, int> dict;

//         for(int i=0; i < numbers.size(); i++){

//             dict[numbers[i]] = i;
//         }

//         int compliment = 0;

//         for(int j=0; j < numbers.size(); j++){

//             if((dict.find(target - numbers[j]) != dict.end()) && (j != dict[target - numbers[j] ])){

//                 return {j+1, dict[target - numbers[j]]+ 1};
//             }

//         }
        

        
//     }
// };

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {

        // sort(numbers.begin(), numbers.end());

        int left = 0;
        int right = numbers.size()-1;

        while(true){

            if(numbers[left] + numbers[right] > target){
                right--;
            }else if(numbers[left] + numbers[right] < target){
                left++;
            }

            if((numbers[left] + numbers[right] == target) && (left != right)){

                return {left+1, right+1};

            }


        }

        

        
    }
};

