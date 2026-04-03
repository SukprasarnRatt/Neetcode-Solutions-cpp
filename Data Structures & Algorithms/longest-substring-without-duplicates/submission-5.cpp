class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        if(s.size() == 0){

            return 0;
        }
        int longest = 0;
        int currentWindow = 0;
        vector<int> seen(128, 0);

        int left = 0;
        int right = 0;

        while (right < s.size()) {
            while (seen[s[right]] == 1) {
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
