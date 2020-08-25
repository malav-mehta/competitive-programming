/* 983. Minimum Cost For Tickets, 4 ms */

class Solution {
public:
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        /*
        Time complexity: O(n)
        Space complexity: O(n)
        */
        
        vector<int> dp(days.size(), -1);
        vector<int> dur{1, 7, 30};
        
        return mem(0, dp, dur, days, costs);
    }
    
    int mem(int i, vector<int>& dp, vector<int>& dur, vector<int>& days, vector<int>& costs) {
        if (i >= days.size()) return 0;
        if (dp[i] != -1) return dp[i];
        
        int x = INT_MAX;
        int j = i;
        
        for (int k = 0; k < 3; ++k) {
            while (j < days.size() && days[j] < days[i] + dur[k])
                ++j;
            x = min(x, mem(j, dp, dur, days, costs) + costs[k]);
        }
        
        dp[i] = x;
        return x;
    }
};
