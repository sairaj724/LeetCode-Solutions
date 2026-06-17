class Solution {
public:
    int minimumLength(string s) {
        vector<int> freq(26, 0);
        for (char ch : s) {
            freq[ch - 'a']++;
        }

        int finalLength = 0;
        for (int i = 0; i < 26; i++) {
            if (freq[i] == 0) continue;
            
            if (freq[i] % 2 == 0) {
                finalLength += 2; // Even frequencies leave 2 behind
            } else {
                finalLength += 1; // Odd frequencies leave 1 behind
            }
        }

        return finalLength;
    }
};
