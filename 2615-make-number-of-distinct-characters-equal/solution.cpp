class Solution {
public:
    bool isItPossible(string word1, string word2) {
         vector<int> freq1(26,0);
         vector<int> freq2(26,0);

         for(char ch : word1) freq1[ch - 'a']++;
         for(char ch : word2) freq2[ch - 'a']++;

         for(int i =0; i<26; i++){
            for(int j =0; j<26; j++){

                if(freq1[i] > 0 && freq2[j] > 0){
                    freq1[i]--;
                    freq1[j]++;

                    freq2[j]--;
                    freq2[i]++;

                    int distinct1 =0, distinct2 = 0;
                    for(int k =0; k < 26; k++){
                        if(freq1[k] > 0) distinct1++;
                        if(freq2[k] > 0) distinct2++;
                    }

                    if(distinct1 == distinct2) return true;

                    freq1[i]++;
                    freq1[j]--;

                    freq2[j]++;
                    freq2[i]--;
                }
            }
         }
         return false; 
    }
};
