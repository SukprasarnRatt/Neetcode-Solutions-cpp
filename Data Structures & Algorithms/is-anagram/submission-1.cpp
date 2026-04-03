class Solution {
public:
    bool isAnagram(string s, string t) {

        if(s.length() != t.length()){
            return false;
        }
        
        unordered_map <char, int> dicts;
        unordered_map <char, int> dictt;

        for(size_t i = 0; i < s.length(); ++i){
            dicts[s[i]]++;
            dictt[t[i]]++;
        }

        return dicts == dictt;

        
    }
};
