class Solution {
    
public:
    string reverseOnlyLetters(string s) {
        int left = 0; 
        int right = s.length()-1;
        
        while(left < right){
            if(!isalpha(s[left])){
                left++;
            }

            if(!isalpha(s[right])){
                right--;
            }

            if(isalpha(s[left]) && isalpha(s[right])){
                swap(s[left] , s[right]);
                left++;
                right--;
            }
        }
        return s;
    }
};
