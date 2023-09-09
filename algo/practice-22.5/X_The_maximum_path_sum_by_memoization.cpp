#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>pii;
#define ll long long
int row,column;
int arr[1005][1005];
int dp[1005][1005];
int knapsack(int n,int m){
    if(row<=n||column<=m)return 0;
    if(dp[n][m]!=-1)return dp[n][m];
    int choice1=knapsack(n+1,m)+arr[n][m];
    int choice2=knapsack(n,m+1)+arr[n][m];
    return dp[n][m]=max(choice1,choice2);
}
int main(){
    cin>>row>>column;
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            dp[i][j]=-1;
        }
    }
    cout<<knapsack(0,0);
    return 0;
}