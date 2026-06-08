class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        unordered_set<int> elements(nums.begin(), nums.end());

        while(elements.find(original) != elements.end()){
            original *= 2;
        }
        return original;
    }
};
