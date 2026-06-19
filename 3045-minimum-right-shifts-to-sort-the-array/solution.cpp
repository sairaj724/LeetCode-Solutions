class Solution {
public:
    int minimumRightShifts(vector<int>& nums) {
        int n = nums.size();
        int dropCount = 0;
        int dropIndex = -1;

        for (int i = 0; i < n - 1; i++) {
            if (nums[i] > nums[i + 1]) {
                dropCount++;
                dropIndex = i;
            }
        }

        if (nums[n - 1] > nums[0]) {
            dropCount++;
        }

        if (dropCount > 1) {
            return -1;
        }

        if (dropIndex == -1) {
            return 0;
        }

        return n - 1 - dropIndex;
    }
};
