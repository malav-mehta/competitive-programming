class Solution {
public:
    int dp[100000]={};
    bool winnerSquareGame(int n) {
        for(int i=1;i<=n;++i) for(int j=1;j*j<=i;++j) if(!dp[i-j*j]) {
            dp[i]=1;
            break;
        }
        return dp[n];        
    }
};
