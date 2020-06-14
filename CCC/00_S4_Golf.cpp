#include <cstdio>
#include <climits>

int dist, club;
int dp[5281], clubs[32];

int main() {
    scanf("%d %d", &dist, &club);
    dp[0] = 0;
    
    for (int i = 0; i < club; ++i) scanf("%d", &clubs[i]);
    for (int i = 1; i <= dist; ++i) dp[i] = INT_MAX;
    
    for (int d = 0; d <= dist; ++d) for (int c : clubs) if (d - c >= 0)
        dp[d] = dp[d] < dp[d - c] + 1 ? dp[d] : dp[d - c] + 1;
    
    if (dp[dist] != INT_MAX) printf("Roberta wins in %d strokes.", dp[dist]);
    else printf("Roberta acknowledges defeat.");
    return 0;
}
