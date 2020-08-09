class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        if (grid.empty())
            return 0;

        int fresh = 0, timer = 0;
        int m = grid.size(), n = grid[0].size();

        for (int i = 0; i < m; ++i)
            fresh += count(grid[i].begin(), grid[i].end(), 1);

        for (int old = fresh; fresh > 0; ++timer) {
            for (int i = 0; i < m; ++i)
                for (int j = 0; j < n; ++j)
                    if (grid[i][j] == timer + 2) {
                        fresh -= rot(grid, m, n, i + 1, j, timer) +
                            rot(grid, m, n, i - 1, j, timer) +
                            rot(grid, m, n, i, j + 1, timer) +
                            rot(grid, m, n, i, j - 1, timer);
                    }

            if (fresh == exchange(old, fresh))
                return -1;
        }

        return timer;
    }

    int rot(vector<vector<int>>& g, int& m, int& n, int i, int j, int timer) {
        if (i < 0 || j < 0 || i >= m || j >= n || g[i][j] != 1)
            return 0;

        g[i][j] = timer + 3;
        return 1;
    }
};
