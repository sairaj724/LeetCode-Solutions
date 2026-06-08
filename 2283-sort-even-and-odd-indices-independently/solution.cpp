class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        int n = nums.size();

        priority_queue<int , vector<int> , greater<int>> evens;
        priority_queue<int> odds;

        for(int i = 0; i<n; i++){
            if(i %2 == 0){
                evens.push(nums[i]);
            }
            else{
                odds.push(nums[i]);
            }
        }

        for(int i=0; i<n ; i++){
            if(i % 2 == 0){
                nums[i] = evens.top();
                evens.pop();
            }
            else{
                nums[i] = odds.top();
                odds.pop();
            }
        }
        return nums;
    }
};
