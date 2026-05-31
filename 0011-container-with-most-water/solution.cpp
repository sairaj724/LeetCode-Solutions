class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxWater = 0 , currentWater= 0;
        int n = height.size();
        int lp = 0 , rp = n-1;
        while(lp < rp){
           int h = min(height[lp],height[rp]);
           int w = (rp-lp);
           currentWater = h*w;
           maxWater = max(currentWater, maxWater);

           if(height[lp]<height[rp]){
            lp++;
           }
           else{
            rp--;
           }
        }
        return maxWater;
        
    }
};
