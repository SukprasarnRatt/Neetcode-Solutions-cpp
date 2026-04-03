class Solution {
public:
    bool checkInclusion(string s1, string s2) {

        if(s1.size() > s2.size()){

            return false;
        }

        vector <int> s1Check(26,0);
        vector <int> s2Check(26,0);

        int windowSize = s1.size();
        for(int i=0; i< s1.size(); i++){
            s1Check[s1[i] - 'a']++;
        }
        for (int i = 0; i < windowSize; i++) {
            s2Check[s2[i] - 'a']++;
        }


        int left = 0;
        int right = windowSize - 1;

        while(right < s2.size()){

            if(s1Check == s2Check){
                return true;
            }else{

                s2Check[s2[left] - 'a']--;
                left++;
                right++;
                s2Check[s2[right] - 'a']++;
                
            }

        }
        for (int i = 0; i < 26; i++) {
            cout << s1Check[i] << " ";
        }
        cout << endl;

        for (int i = 0; i < 26; i++) {
            cout << s2Check[i] << " ";
        }
        cout << endl;


        return false;

        
    }
};
