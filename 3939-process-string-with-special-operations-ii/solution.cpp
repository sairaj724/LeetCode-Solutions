class Solution {
public:
    char processStr(string s, long long k) {
        vector<long long> lengths;
        long long curLen = 0;
        
        for (char ch : s) {
            if (ch >= 'a' && ch <= 'z') {
                curLen++;
            } else if (ch == '*') {
                if (curLen > 0) curLen--;
            } else if (ch == '#') {
                curLen *= 2;
            }
            lengths.push_back(curLen);
        }
        
        if (k >= curLen || k < 0) return '.';
        
        for (int i = s.length() - 1; i >= 0; i--) {
            char ch = s[i];
            long long prevLen = (i == 0) ? 0 : lengths[i - 1];
            
            if (ch == '%') {
                k = curLen - 1 - k;
            } 
            else if (ch == '#') {
                long long halfLen = curLen / 2;
                if (k >= halfLen) {
                    k -= halfLen;
                }
                curLen = halfLen;
            } 
            else if (ch == '*') {
                curLen = prevLen; 
            } 
            else {
                if (k == curLen - 1) {
                    return ch;
                }
                curLen = prevLen;
            }
        }
        
        return '.';
    }
};
