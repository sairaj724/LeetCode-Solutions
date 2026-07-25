class Solution {
public:
    int maxProduct(int n) {
        vector<int> digits;
        while(n > 0){
            int digit = n % 10;
            digits.push_back(digit);
            n /= 10;
        }
        int max1 =0 , max2 = 0;
        for( int num : digits){
            if(num > max1){
               max2 = max1;
               max1 = num;
            }
            else if(num > max2){
                max2 = num;
            }
        }
       return max1 * max2;
    }
};
