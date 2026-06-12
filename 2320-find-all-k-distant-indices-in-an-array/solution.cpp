class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
        int n = nums.size();
        vector<int> ans;
        vector<int> keys;

        for(int i=0; i<n; i++){
            if(nums[i] == key){
                keys.push_back(i);
            }
        }

        int keyPtr = 0;

        for(int i =0; i<n; i++){
            while(keyPtr < keys.size() && keys[keyPtr] < i -k ){
                keyPtr++;
            }

            if(keyPtr < keys.size() && abs(keys[keyPtr] - i) <= k){
                ans.push_back(i);
            }
        }
        return ans;
    }
};
