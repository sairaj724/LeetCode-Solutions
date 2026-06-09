class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {
        int maxSub = nums[0];
        int minSub = nums[0];

        for(int num : nums){
            maxSub = max(num, maxSub);
            minSub = min(num , minSub);
        }

        long long maxTotal = (maxSub - minSub);
        return maxTotal * k;
    }
};
