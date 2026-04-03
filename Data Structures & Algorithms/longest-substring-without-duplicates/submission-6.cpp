class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        if(s.size() == 0){

            return 0;
        }
        int longest = 0;
        vector<int> seen(128, 0);

        int left = 0;
        int right = 0;

        while (right < s.size()) {

            /* 1. check if seen[s[right]] == 1
                  keep moving left pointer until removing duplicate character 
                  and set seen character to 0 (because we moving to left and window change)
               2. move right pointer to next chracter and update longest.

            */ 
            while(seen[s[right]] == 1){

                if(s[left] == s[right]){
                    seen[s[left]] = 0;
                    left++;
                    break;        
                }
                seen[s[left]] = 0;
                left++;
                

            }

            seen[s[right]] = 1;
            longest = max(longest, right - left + 1);
            right++;
            
            
        }
        return longest;
        
    }
};
