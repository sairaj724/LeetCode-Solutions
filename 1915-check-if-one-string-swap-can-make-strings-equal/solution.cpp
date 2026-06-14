class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        if( s1 == s2) return true;
        vector<int> mismatches;

        for(int i =0; i<s1.length(); i++){
            if(s1[i] != s2[i]){
                mismatches.push_back(i);
            }
        }

        if(mismatches.size() != 2) return false;

        int idx1 = mismatches[0];
        int idx2 = mismatches[1];

        return (s1[idx1] == s2[idx2] && s1[idx2] == s2[idx1]);

    }
};
