class Solution {
public:
    int characterReplacement(string s, int k) {

        vector<int> count(26, 0);

        int left = 0;
        int right = 0;

        int windowSize = right - left + 1;
        int maxFreq = 0;
        int longest = 0;
        int need;
        while(right < s.size()){

            count[s[right] -'A']++;
            maxFreq = max(maxFreq, count[s[right] - 'A']);
            windowSize = right - left + 1;

            need = windowSize - maxFreq;

            if(need <= k){

                longest = max(longest, windowSize);

            }else if (need > k){
                count[s[left] - 'A']--;
                left++;
            }

            right++;


        }

        return longest;


        
    }
};
