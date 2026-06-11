class Solution {
public:
    int possibleStringCount(string word) {
        int possibleStr = 1;

        for(int i =1; i< word.length(); i++){
            if(word[i] == word[i-1]){
                possibleStr++;
            }
        }
        return possibleStr;
    }
};
