// #include<bits/stdc++.h>
// using namespace std;
// typedef pair<int,int>pii;
// #define ll long long
// int dp[1005][1005];
// int main(){
//     int n,m;cin>>n>>m;
//     int a[n][m];
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             cin>>a[i][j];
//         }
//     }
//     for(int i=0;i<=n;i++){
//         for(int j=0;j<=m;j++){
//             dp[i][j]=0;
//         }
//     }
//     dp[n - 1][m - 1]=a[n-1][m-1];
//     for(int i=0;i<=m;i++){
        
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

const int MAX_N = 11; 

int main() {
    int row, column;
    cin >> row >> column;
    
    int arr[MAX_N][MAX_N];
    
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < column; j++) {
            cin >> arr[i][j];
        }
    }
    
    int dp[MAX_N][MAX_N]; 
    dp[row - 1][column - 1] = arr[row - 1][column - 1];
    
    for (int i = row - 2; i >= 0; i--) {
        dp[i][column - 1] = arr[i][column - 1] + dp[i + 1][column - 1];
    }
    
    for (int j = column - 2; j >= 0; j--) {
        dp[row - 1][j] = arr[row - 1][j] + dp[row - 1][j + 1];
    }
    
    for (int i = row - 2; i >= 0; i--) {
        for (int j = column - 2; j >= 0; j--) {
            dp[i][j] = arr[i][j] + max(dp[i + 1][j], dp[i][j + 1]);
        }
    }
    
    cout << dp[0][0] << endl;
    
    return 0;
}
