class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        int maxPrice = *max_element(costs.begin(), costs.end());
        vector<int> freq(maxPrice + 1, 0);
        
        for (int price : costs) {
            freq[price]++;
        }
        
        int count = 0;
        
        for (int price = 1; price <= maxPrice; price++) {
            if (freq[price] == 0) continue;
            
            if (coins < price) break;
            
            long long maxBarsWeCanAfford = (long long)coins / price;
            long long barsToBuy = min((long long)freq[price], maxBarsWeCanAfford);
            
            coins -= barsToBuy * price;
            count += barsToBuy;
            
            if (coins < price) break;
        }
        
        return count;
    }
};
