class Solution {
public:
    bool buddyStrings(string s, string goal) {
        if(s.length() != goal.length()) return false;
        
        if( s == goal){
            unordered_set<char> uniqueChars(s.begin(), s.end());
            return uniqueChars.size() < s.length();
        }

        vector<int> mismatches;
        for(int i=0; i< s.length(); i++){
            if(s[i] != goal[i]){
                mismatches.push_back(i);
            }
        }

        if(mismatches.size() != 2) return false;

        int first = mismatches[0];
        int second = mismatches[1];

        return (s[first] == goal[second] && s[second] == goal[first]);
    }
};
