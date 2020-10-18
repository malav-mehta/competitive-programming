class Solution {
public:
    int maxProfit(int k, vector<int>& prices) {
        int n = prices.size(), r = 0;
        if (n < 2 || k <= 0) return 0;
        
        if (2 * k > n) {
            for (int i = 1; i < n; ++i) r += max(prices[i] - prices[i - 1], 0);
            return r;
        }
        
        int a[k + 1], b[k + 1];
        for (int i = 0; i <= k; ++i) {
            a[i] = INT_MIN;
            b[i] = 0;
        }
        
        for (int i = 0; i < n; ++i) {
            r = prices[i];
            for (int j = k; j > 0; --j) {
                b[j] = max(b[j], a[j] + r);
                a[j] = max(a[j], b[j - 1] - r);
            }
        }
        
        return b[k];
    }
};
