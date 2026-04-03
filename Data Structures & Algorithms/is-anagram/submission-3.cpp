// class Solution {
// public:
//     bool isAnagram(string s, string t) {

//         if (s.size() != t.size()){

//             return false;
//         }

//         map <char, int> anagramCheckS;
//         map <char, int> anagramCheckT;

//         for( char i: s){

//             anagramCheckS[i]++;
//         }
//         for( char i: t){

//             anagramCheckT[i]++;
//         }

//         if(anagramCheckS == anagramCheckT){
//             return true;
//         }

//         return false;

        
//     }
// };




class Solution {
public:
    bool isAnagram(string s, string t) {

        if (s.size() != t.size()){

            return false;
        }

        unordered_map <char, int> anagramCheckS;
        unordered_map <char, int> anagramCheckT;

        for( char i: s){

            anagramCheckS[i]++;
        }
        for( char i: t){

            anagramCheckT[i]++;
        }

        if(anagramCheckS == anagramCheckT){
            return true;
        }

        return false;

        
    }
};

