

// ******* This solution use MAP ***** //
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



// ******* This solution use unordered_map ***** //
// class Solution {
// public:
//     bool isAnagram(string s, string t) {

//         if (s.size() != t.size()){

//             return false;
//         }

//         unordered_map <char, int> anagramCheckS;
//         unordered_map <char, int> anagramCheckT;

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



// ******* This solution use Vector ***** //
class Solution {
public:
    bool isAnagram(string s, string t) {

        if (s.size() != t.size()){

            return false;
        }

        vector<int> charCount (26, 0);

        for (char i: s){
            charCount[i - 'a']++;
        }
        for (char j: t){
            charCount[j - 'a']--;
        }

        for (int k: charCount){
            if(k != 0){
                return false;
            }
        }


        return true;

        
    }
};

