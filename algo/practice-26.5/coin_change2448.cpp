class Solution{
    public:
    long long int count(int coins[], int n, int s) {
        long long int dp[n+1][s+1];
        dp[0][0]=1;
        for(int i=1;i<=s;i++)dp[0][i]=0;
        for(int i=1;i<=n;i++){
            for(int j=0;j<=s;j++){
                if(coins[i-1]<=j)dp[i][j]=dp[i][j-coins[i-1]]+dp[i-1][j];
                else dp[i][j]=dp[i-1][j];
            }
        }
        return dp[n][s];
    }
};