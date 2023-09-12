class Solution{
    public:
    int dp[1005][1005];
    Solution() {
        // Initialize the dp array with -1
        for (int i = 0; i < 1005; i++) {
            for (int j = 0; j < 1005; j++) {
                dp[i][j] = -1;
            }
        }
    }
    int knapSack(int N, int W, int val[], int wt[])
    {
        // code here
        if(N==0||W==0)return 0;
        if(dp[N][W]!=-1)return dp[N][W];
        if(wt[N-1]<=W)return dp[N][W]=max(val[N-1]+knapSack(N,W-wt[N-1],val,wt),knapSack(N-1,W,val,wt));
        else return dp[N][W]=knapSack(N-1,W,val,wt);
    }
};