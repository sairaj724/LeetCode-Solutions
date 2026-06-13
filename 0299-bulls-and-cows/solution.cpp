class Solution {
public:
    string getHint(string secret, string guess) {
        int n = guess.length();
        int bullCount = 0;
        int totalMatches = 0;
        

        for(int i =0; i< n; i++){
            if(secret[i] == guess[i]){
                bullCount++;
            }
        }
        vector<int> digitFreq1(10,0);
        vector<int> digitFreq2(10,0);
        for(int i =0; i< n; i++){
           digitFreq1[secret[i] - '0']++;
           digitFreq2[guess[i] - '0']++;
        }

        for(int i =0; i<10 ; i++){
             totalMatches += min(digitFreq1[i], digitFreq2[i]);
            
        }
        
        int cowCount = totalMatches - bullCount;
        string result = "";
        result += to_string(bullCount) + "A" + to_string(cowCount) + "B";
        return result;
    }
};
