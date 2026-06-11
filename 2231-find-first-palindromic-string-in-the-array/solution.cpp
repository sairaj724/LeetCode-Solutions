class Solution {
    bool isPalindrome(string str){
        int left = 0;
        int right = str.length() - 1;
        while (left < right) {
            if (str[left] != str[right]) return false;
            left++;
            right--;
        }
        return true;
    }

public:
    string firstPalindrome(vector<string>& words) {
        for(string word : words){
            if(isPalindrome(word)){
                return word;
            }
        }
        return "";
    }
};
