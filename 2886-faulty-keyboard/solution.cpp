class Solution {
public:
    string finalString(string s) {
        deque<char> dq;
        bool reverseDir = false;

        for(char ch : s){
            if(ch == 'i'){
                reverseDir = !reverseDir;
            }
            else{
                if(!reverseDir){
                    dq.push_back(ch);
                }
                else{
                    dq.push_front(ch);
                }
            }
        }
        string ans(dq.begin(), dq.end());

        if(reverseDir){
            reverse(ans.begin(), ans.end());
        }
        return ans;
    }
};
