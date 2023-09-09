#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>pii;
#define ll long long
int main(){
    int t;cin>>t;
    for(int k=1;k<=t;k++){
        int n;cin>>n;
        ll a[10004];
        for(int i=0;i<n;i++)cin>>a[i];
        ll dp[10004];
        dp[0]=a[0];
        dp[1]=max(dp[0],a[1]);
        for(int i=2;i<n;i++){
            dp[i]=max(dp[i-1],a[i]+dp[i-2]);
        }
        cout<<"Case "<<k<<": "<<dp[n-1]<<endl;
    }
    return 0;
}