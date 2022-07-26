class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int min_val = prices[0];
        int maxVal = 0;
        int n = prices.size();
        for(int i = 0; i<n ;i++){
            if(prices[i]< min_val)
                min_val = prices[i];
            
            else
                maxVal = max(maxVal, prices[i]- min_val);
        }
        return maxVal;
    }
};
    
