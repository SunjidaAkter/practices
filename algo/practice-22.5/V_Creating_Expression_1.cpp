#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>pii;
#define ll long long
int main(){
    int n;ll diff;
    cin>>n>>diff;
    int a[n]; ll sum=0;
    for(int i=0;i<n;i++)cin>>a[i];
    ll s;
    for(int i=0;i<n;i++)sum+=a[i];
    if((diff+sum)%2==0){
        s=abs(diff+sum)/2;
        int dp[n+1][s+1];
        dp[0][0]=1;
        for(ll i=1;i<=s;i++)dp[0][i]=0;
        for(int i=1;i<=n;i++){
            for(ll j=0;j<=s;j++){
                if(a[i-1]<=j){
                    dp[i][j]=dp[i-1][j-a[i-1]]||dp[i-1][j];
                }else{
                    dp[i][j]=dp[i-1][j];
                }
            }
        }
        bool flag=false;
        for(ll i=0;i<=s;i++){
            if(dp[n][i]==1){
                flag=true;
                break;
            }
        }
        if(flag)cout<<"YES";
        else cout<<"NO";
    }else cout<<"NO";  
    return 0;
}