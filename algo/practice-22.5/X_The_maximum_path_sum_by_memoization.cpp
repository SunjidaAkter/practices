#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>pii;
#define ll long long
int row,column;
ll arr[15][15];
ll dp[1005][1005];
ll knapsack(int n,int m){
    if(row<=n||column<=m)return 0;
    if(dp[n][m]!=-1)return dp[n][m];
    ll choice1=knapsack(n+1,m)+arr[n][m];
    ll choice2=knapsack(n,m+1)+arr[n][m];
    return dp[n][m]=max(choice1,choice2);
}
int main(){
    cin>>row>>column;
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<=row;i++){
        for(int j=0;j<=column;j++){
            dp[i][j]=-1;
        }
    }
    cout<<knapsack(0,0);
    return 0;
}
// #include <bits/stdc++.h>
// using namespace std;
// #define lli long long int
// int n, m;
// int sum = INT_MIN;
// int a[10][10];
// void max_sum(int i, int j, int s)
// {
//     if (i >= n || j >= m)
//         return;
//     if (i == n - 1 && j == m - 1)
//         sum = max(sum, s+a[i][j]);

//     max_sum(i + 1, j, s + a[i][j]);
//     max_sum(i, j + 1, s + a[i][j]);
// }

// int main()
// {
//     cin >> n >> m;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             cin >> a[i][j];
//         }
//     }

//     max_sum(0, 0, 0);
//     cout << sum << endl;
//     return 0;
// }