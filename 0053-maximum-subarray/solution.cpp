class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSum = INT_MIN;
        int currentSum = 0;

        for (int i : nums){
            currentSum += i;
            maxSum = max(currentSum,maxSum);

            if ( currentSum < 0){
                currentSum = 0;
            }
        }
        return maxSum;
    }
};
