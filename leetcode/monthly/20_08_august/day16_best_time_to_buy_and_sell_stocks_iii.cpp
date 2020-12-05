class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int a = INT_MIN, b = INT_MIN;
        int m = 0, n = 0;
        
        for (int i : prices) {
            n = max(n, b + i);
            b = max(b, m - i);
            m = max(m, a + i);
            a = max(a, -i);
        }
        
        return n;
    }
};
