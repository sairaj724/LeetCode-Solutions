class Solution {
public:
    int maxNumberOfBalloons(string text) {
        vector<int> counts(26,0);

        for(char ch : text){
            counts[ch - 'a']++;
        }

        int bCount = counts['b' - 'a'];
        int aCount = counts['a' - 'a'];
        int lCount = counts['l' - 'a'] /2;
        int oCount = counts['o' - 'a'] /2;
        int nCount = counts['n' - 'a'];

        return min({bCount, aCount, lCount, oCount, nCount});
    }
};
