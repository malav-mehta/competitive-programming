/* 931. Minimum Falling Path Sum, 24 ms */

class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& A) {
        /*
        Time complexity: O(n^2)
        Space complexity: O(1)
        */

        int n = A.size();

        for (int i = 1; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                int mn = A[i - 1][j];
                if (j != n - 1) mn = min(mn, A[i - 1][j + 1]);
                if (j != 0) mn = min(mn, A[i - 1][j - 1]);
                A[i][j] += mn;
            }
        }

        sort(A.back().begin(), A.back().end());
        return A.back()[0];
    }
};