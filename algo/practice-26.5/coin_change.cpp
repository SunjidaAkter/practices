class Solution {
public:
    int coinChange(vector<int>& coins, int s) {
    int n=coins.size();
    int dp[n+1][s+1];
    dp[0][0]=0;
    for(int i=1;i<=s;i++)dp[0][i]=INT_MAX;
    for(int i=1;i<=n;i++){
        for(int j=0;j<=s;j++){
            if(coins[i-1]<=j && dp[i][j-coins[i-1]]!=INT_MAX)dp[i][j]=min(dp[i][j-coins[i-1]]+1,dp[i-1][j]);
            else dp[i][j]=dp[i-1][j];
        }
    }
    if(dp[n][s]==INT_MAX)return -1;
    else return dp[n][s]; 
    }
};