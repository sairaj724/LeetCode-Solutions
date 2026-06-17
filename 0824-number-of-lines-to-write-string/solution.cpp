class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string s) {
        int lines  = 1;
        int currWidth = 0;

        for(char ch : s){
            int charWidth = widths[ch - 'a'];

            if(currWidth + charWidth <= 100){
                currWidth += charWidth;
            }
            else{
                lines++;
                currWidth = charWidth;
            }
        }
        return {lines, currWidth};
    }
};
