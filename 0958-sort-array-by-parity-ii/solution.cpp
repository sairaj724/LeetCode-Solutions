class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int n = nums.size();

        priority_queue<int> evens;
        priority_queue<int> odds;

        for(int num : nums){
            if(num % 2 == 0){
                evens.push(num);
            }
            else{
                odds.push(num);
            }
        }

        vector<int> ans(n);
        for(int i=0; i < n ; i++){
            if( i % 2 == 0){
                ans[i] = evens.top();
                evens.pop();
            }
            else{
                ans[i] = odds.top();
                odds.pop();
            }
        }
        return ans;
    }
};
