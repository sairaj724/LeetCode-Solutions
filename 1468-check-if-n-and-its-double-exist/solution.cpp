class Solution {
public:
    bool checkIfExist(vector<int>& nums) {
        unordered_set<int> seen;

        for(int num : nums){
            if (seen.find(2 * num) != seen.end() || 
               (num % 2 == 0 && seen.find(num / 2) != seen.end())) {
                return true;
        }
        seen.insert(num);
        
        }
        return false;
    }

};
