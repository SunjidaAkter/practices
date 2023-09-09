//https://zobayer.blogspot.com/2009/12/cse-102-practice-recursions.html
#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>pii;
#define ll long long
int main(){
    ll n;cin>>n;
    ll f[n+1];
    f[1]=0;
    f[2]=1;
    for(int i=3;i<=n;i++){
        f[i]=f[i-1]+f[i-2];
    }
    cout<<f[n];
    return 0;
}