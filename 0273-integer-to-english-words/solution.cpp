class Solution {
private:
    const vector<string> belowTwenty = {
        "", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten",
        "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"
    };
    
    const vector<string> tens = {
        "", "", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"
    };

    string solveThreeDigits(int num) {
        if (num == 0) return "";
        
        if (num < 20) {
            return belowTwenty[num] + " ";
        } 
        else if (num < 100) {
            return tens[num / 10] + " " + solveThreeDigits(num % 10);
        } 
        else {
            return belowTwenty[num / 100] + " Hundred " + solveThreeDigits(num % 100);
        }
    }

public:
    string numberToWords(int num) {
        if (num == 0) return "Zero";

        const vector<pair<int, string>> scales = {
            {1000000000, "Billion"},
            {1000000, "Million"},
            {1000, "Thousand"}
        };

        string result = "";

        for (const auto& scale : scales) {
            int unit = scale.first;
            string word = scale.second;

            if (num >= unit) {
                result += solveThreeDigits(num / unit) + word + " ";
                num %= unit;
            }
        }

        result += solveThreeDigits(num);

        while (!result.empty() && result.back() == ' ') {
            result.pop_back();
        }

        return result;
    }
};
