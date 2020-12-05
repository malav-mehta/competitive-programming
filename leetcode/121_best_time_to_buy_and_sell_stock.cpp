class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if (prices.size() <= 1)
            return 0;
        
        int mnP = prices[0];
        int ans = 0;
        
        for (int i = 1; i < prices.size(); ++i) {
            ans = max(ans, prices[i] - mnP);
            mnP = min(mnP, prices[i]);
        }
        
        return ans;
    }
};
