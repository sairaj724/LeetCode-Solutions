class Solution {
public:
    bool areOccurrencesEqual(string s) {
        vector<int> freq(26, 0);
        for (char ch : s) {
            freq[ch - 'a']++;
        }
        
        int targetFreq = freq[s[0] - 'a'];
        
        for (int count : freq) {
            if (count > 0 && count != targetFreq) {
                return false;
            }
        }
        
        return true;
    }
};
