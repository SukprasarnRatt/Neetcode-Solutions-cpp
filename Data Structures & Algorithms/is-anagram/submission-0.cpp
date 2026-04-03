class Solution {
public:
    bool isAnagram(string s, string t) {

        if(s.size() != t.size()){
            return false;
        }else{
            int len = s.size();
            unordered_map <char, int> dict_s;
            unordered_map <char, int> dict_t;
            for(int i=0; i < len ; i++){
                dict_s[s[i]]++;
                dict_t[t[i]]++;
            }

            return dict_s == dict_t;

        }
        
    }
};
