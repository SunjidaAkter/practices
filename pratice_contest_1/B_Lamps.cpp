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
    vector<pii>a(n);
    for(ll i=0;i<n;i++)cin>>a[i].first>>a[i].second;
    sort(all(a),[](pii &a,pii &b){
        if(a.first==b.first){
            return a.second>=b.second;
        }
        return a.first<=b.first;
    });
    ll y=0;
    ll sum=0,cnt=a[0].first;
    for(ll j=0;j<a[0].first;j++){
        if(a[y].first==cnt){
            sum+=a[y].second;
            y++;
        }
    }
    for(ll i=y;i<n;i++){
        if(a[i].first-a[i-1].first==1){
            ll x=i;
            cnt++;
            for(ll j=0;j<a[i].first;j++){
                if(a[x].first==cnt){
                    sum+=a[x].second;
                    x++;
                }
            }
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