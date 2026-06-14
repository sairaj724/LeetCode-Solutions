class Solution {
public:
    int minAddToMakeValid(string s) {
        int unbalancedOpen = 0;
        int requireAdds = 0;

        for(int i=0;i<s.length() ;i++){
            if(s[i] == '('){
                unbalancedOpen++;
            }
            else{
                if(unbalancedOpen > 0) unbalancedOpen--;
                else requireAdds++;
            }
        }
        return unbalancedOpen + requireAdds;
    }
};
