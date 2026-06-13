class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        string result = "";

        for(string word : words){
            long long wordWeight = 0;
            
            for( char ch: word){
                int alphaIdx = ch - 'a';
                wordWeight += weights[alphaIdx];
            }
            int remainder = wordWeight % 26;
            char mappedChar = 'z' - remainder;

            result += mappedChar;
        }
        return result;
    }
};
