class Solution {
public:
    int largestInteger(int num) {
        string s = to_string(num);

        priority_queue<int> evens;
        priority_queue<int> odds;

        for(char c : s){
            int digit = c - '0';
            if (digit % 2 == 0){
                evens.push(digit);
            }
            else{
                odds.push(digit);
            }
        }

        int ans = 0;
        for( char c : s){
            int digit = c - '0';
            ans *= 10;

            if(digit % 2 == 0){
                ans+= evens.top();
                evens.pop();
            }
            else{
                ans += odds.top();
                odds.pop();
            }
        }
        return ans;
    }
};
