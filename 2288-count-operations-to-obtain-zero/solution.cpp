class Solution {
public:
    int countOperations(int num1, int num2) {
        int steps = 0;
        
        while (num1 != 0 && num2 != 0) {
            if (num1 >= num2) {
                steps += num1 / num2; // Count how many times num2 fits into num1
                num1 %= num2;         // Instantly subtract all of them
            } else {
                steps += num2 / num1; // Count how many times num1 fits into num2
                num2 %= num1;         // Instantly subtract all of them
            }
        }
        
        return steps;
    }
};
