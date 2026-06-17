class Solution {
public:
    int distinctAverages(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        unordered_set<int> uniqueSum;

        int left = 0;
        int right = nums.size() - 1;
       
        while (left < right) {
            int currentSum = nums[left] + nums[right];
            
            uniqueSum.insert(currentSum);  
            left++;
            right--;
        }
        return uniqueSum.size();
    }
};
