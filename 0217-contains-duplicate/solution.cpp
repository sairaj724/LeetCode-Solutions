class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> elements;
        for(int num : nums){
            if(elements.find(num) != elements.end()){
                return true;
            }
            elements.insert(num);
        }
        return false;
    }
};
