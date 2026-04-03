class Solution {
public:

    string encode(vector<string>& strs) {
        string result;
        for(const auto &word: strs){
            result = result + to_string(word.length())+ '#' + word; 
        }
        
        return result;

    }


    vector<string> decode(string s) {
        vector<string> result;
        int i = 0; // Initialize the index i to start from the beginning of the string

        // Loop through the string s
        while (i < s.length()) {
            int j = i;
            // Find the position of the '#' character
            while (s[j] != '#') {
                j++;
            }
            // Extract the number (length of the word) before the '#'
            int length = stoi(s.substr(i, j - i));
            // Extract the word using the length
            result.push_back(s.substr(j + 1, length));
            // Move to the next encoded segment
            i = j + 1 + length;
        }

        return result;
    }
};

