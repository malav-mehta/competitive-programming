class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mx = 0, mn = INT_MAX;
        
        for (int i = 0; i < prices.size(); ++i) {
            if (prices[i] < mn) mn = prices[i];
            else mx = max(mx, prices[i] - mn);
        }
        
        return mx;
    }
};
