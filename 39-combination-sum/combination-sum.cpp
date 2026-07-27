class Solution {
public:
     set<vector<int>> s;

    void getAllCombinations(vector<int>& arr,int idx ,int target, vector<vector<int>>& ans, vector<int>& combn){
        // base cases 
        if(idx == arr.size() || target < 0) return;

        if(target == 0 ){
            if(s.find(combn) == s.end()){
            ans.push_back({combn});
            s.insert(combn);
            }
            return;
        }


        combn.push_back(arr[idx]);
        // single inclusion
        getAllCombinations(arr, idx+1, target-arr[idx], ans ,combn);
        // multiple inclusion
        getAllCombinations(arr, idx, target-arr[idx], ans ,combn);

        combn.pop_back(); // backtrack
        //exclusion
        getAllCombinations(arr, idx+1, target, ans ,combn);
    }

    vector<vector<int>> combinationSum(vector<int>& arr, int target) {
        vector<vector<int>> ans;
        vector<int> combn;

        getAllCombinations(arr,0, target,ans, combn);
        return ans;
    }
};