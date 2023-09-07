// #include<bits/stdc++.h>
// using namespace std;
// typedef pair<int,int>pii;
// #define ll long long
// int main(){
//     int n;cin>>n;
//     while(n--){
//         int s;cin>>s;
//         bool dp[s+1];
//         dp[1]=true;
//         for(int i=1;i<=s;i++){
//             dp[0][i]=false;
//         }
//         for(int i=1;i<=s;i++){
//                 if(a[i-1]<=j){
//                     dp[i][j]=dp[i-1][j-a[i-1]]||dp[i-1][j+a[i-1]];
//                 }else{
//                     dp[i][j]=dp[i-1][j+a[i-1]];
//                 }
//             }
//         }
//         if(dp[n][s])cout<<"YES";
//         else cout<<"NO";

//     }
//     return 0;
// }