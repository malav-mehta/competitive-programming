#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin >> n >> m;

    vector<vector<int> > dp(n, vector<int>(m));
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
            cin >> dp[i][j];

    for (int i = 1; i < n; ++i)
        dp[i][0] += dp[i - 1][0];

    for (int j = 1; j < m; ++j)
        dp[0][j] += dp[0][j - 1];

    for (int i = 1; i < n; ++i)
        for (int j = 1; j < m; ++j)
            dp[i][j] += min(dp[i - 1][j], dp[i][j - 1]);

    cout << dp.back().back();
    return 0;
}
