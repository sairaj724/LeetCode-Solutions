class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> ans(nums.size());
        int idxPlus = 0;
        int idxMinus = 1;

        for(int num : nums){
            if(num > 0){
                ans[idxPlus] = num;
                idxPlus += 2;
            }
            else{
                ans[idxMinus] = num;
                idxMinus += 2;
            }
        }
        return ans;
    }
};
