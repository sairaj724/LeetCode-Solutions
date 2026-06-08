class Solution {
public:
    int dominantIndex(vector<int>& nums) {
     int largest = -1, second_lar = -1;
     int idx = -1;
     for(int i =0; i<nums.size() ; i++){
        if(nums[i] > largest){
            second_lar = largest;
            largest = nums[i];
            idx = i;
        }
        else if( nums[i]> second_lar){
            second_lar = nums[i];
        }
     }

     if( largest >= (second_lar * 2)){
        return idx;
     }

    return -1;
    }
};
