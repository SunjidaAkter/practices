#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define all(X) (X).begin(), (X).end()
#define nl '\n'
#define yes cout<<"YES"<<nl
#define no cout<<"NO"<<nl
#define Yes cout<<"Yes"<<nl
#define No cout<<"No"<<nl
#define FAST ios_base :: sync_with_stdio (false) ; cin.tie(0) ; cout.tie(0)
typedef pair<ll,ll>pii;
void solve(){
    ll n;cin>>n;
    ll a[n],b[n];
    for(ll i=0;i<n;i++){
        cin>>a[i];
        cin>>b[i];
    }
    map<ll,vector<ll>>mp;
    for(ll i=0;i<n;i++){
        mp[a[i]].push_back(b[i]);
    }
    for(ll i=1;i<=n;i++){
        if(mp[i].empty())continue;
        sort(all(mp[i]),greater<ll>());
    }
    ll sum=0;
    for(auto it=mp.begin();it!=mp.end();it++){
        ll cnt=0;
        for(auto v:it->second){
            if(cnt==it->first)break;
            cnt++;
            sum+=v;
        }
    }
    cout<<sum<<nl;
}
int main(){
    FAST;
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}