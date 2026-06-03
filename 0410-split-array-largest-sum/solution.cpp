class Solution {

    bool isValid(vector<int>& nums, int k ,int maxLimit){
            int subCount = 1, currentSum = 0;

            for(int i = 0; i< nums.size();i++){
                if(nums[i] > maxLimit) return false;

                if(currentSum + nums[i] <= maxLimit){
                    currentSum += nums[i];
                }
                else{
                    subCount++;
                    currentSum = nums[i];

                    if(subCount > k){
                    return false;
                   }
                }
                
            }
            return true;
        }

public:
    int splitArray(vector<int>& nums, int k) {
        int maxElement = 0;
        int totalSum = 0;

        for(int num : nums){
            maxElement = max(maxElement, num);
            totalSum += num;
        }

        int st  =maxElement;
        int end = totalSum;
        int ans = end;

        while(st<= end){
            int mid = st + (end-st)/2;

            if(isValid(nums,k,mid)){
                ans = mid;
                end = mid-1;
            }
            else{
                st = mid+1;
            }
        }
        return ans;
    }
};
