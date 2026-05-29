class Solution {
public:
    int minElement(vector<int>& nums) {
        vector<int> temp;
        
        int minNum  = INT_MAX;

        for( int i : nums){
            int sum = 0;
            int val = i;
            while( val > 0){
               int digit = val % 10;
                sum += digit;
                val = val / 10;
            }
            temp.push_back(sum);
        }

        for(int j : temp){
            minNum = min(minNum , j);
        }

        return minNum;
    }
};
