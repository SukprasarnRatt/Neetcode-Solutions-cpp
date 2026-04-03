class Solution {
public:

    string encode(vector<string>& strs) {
        
        string encode;

        for(string i: strs){
            encode += to_string(i.length()) + "#" + i;
            
        }

        return encode;

    }

    vector<string> decode(string s) {

        vector <string> result;

        int i = 0;
        int j = 0;
        int length = 0;
        //12#neet4#code4#love3#you
        while( i < s.size()){

            while ( s[j] != '#'){

                j++;
            }

            length = stoi(s.substr(i, j-i));

            result.push_back(s.substr(j+1, length)); // we get neet

            i = j + length + 1;
            j = i;
            





        }

        return result;

    }
};
