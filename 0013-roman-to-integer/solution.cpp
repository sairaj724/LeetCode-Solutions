class Solution {
    int getRomanValue(char ch) {
        switch (ch) {
            case 'I': return 1;
            case 'V': return 5;
            case 'X': return 10; 
            case 'L': return 50;
            case 'C': return 100;
            case 'D': return 500;
            case 'M': return 1000;
            default: return 0;
        }
    }

public:
    int romanToInt(std::string s) {
        int result = 0;
        int n = s.size();
        
        for (int i = 0; i < n; i++) {
            int curr = getRomanValue(s[i]);
            int next = (i + 1 < n) ? getRomanValue(s[i + 1]) : 0;

            if (curr < next) {
                result -= curr;
            } else {
                result += curr;
            }
        } 
        
        return result; 
    }
};
