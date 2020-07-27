/* 322. Coin Change, 128 ms */

class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        /*
        Time complexity: O(n)
        Space complexity: O(n)
        */

        vector<int> dp(amount + 1, INT_MAX);
        dp[0] = 0;

        for (int i = 1; i <= amount; ++i) {
            for (int c : coins) {
                if (i - c >= 0 && dp[i - c] != INT_MAX) {
                    dp[i] = min(dp[i], dp[i - c] + 1);
                }
            }
        }

        return dp[amount] == INT_MAX ? -1 : dp[amount];
    }
};