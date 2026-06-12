class Solution {
    bool isVowel(char ch){
        if(ch == 'a' || ch == 'e' ||ch == 'i' ||ch == 'o' ||ch == 'u' ) return true;
        return false;
    }

public:
    int vowelConsonantScore(string s) {
        int vCount = 0, cCount = 0;
        for(char ch : s){
            if(isVowel(ch)){
                vCount++;
            }
            else if(isalpha(ch)){
                cCount++;
            }
        }

        if(cCount == 0) return 0;
        return floor( vCount / cCount);
    }
};
