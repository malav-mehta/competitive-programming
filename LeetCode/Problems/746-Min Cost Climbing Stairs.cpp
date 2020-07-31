/* 746. Min Cost Climbing Stairs, 8 ms */

class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        /*
        Time complexity: O(n)
        Space complexity: O(1)
        */
        int n = cost.size();

        for (int i = 2; i < n; ++i) {
            cost[i] += min(cost[i - 1], cost[i - 2]);
        }

        return min(cost[n - 1], cost[n - 2]);
    }
};