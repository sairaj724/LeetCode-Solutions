class Solution {
public:
    int commonFactors(int a, int b) {
       int gcdValue = gcd(a, b);
        int count = 0;
        
        for (int i = 1; i * i <= gcdValue; i++) {
            if (gcdValue % i == 0) {
                count++;
                if (i * i != gcdValue) {
                    count++;
                }
            }
        }
        
        return count;
    }
};
