#include<bits/stdc++.h>
using namespace std;
typedef pair<int ,int>pii;
int main(){
    int t;cin>>t;
    while(t--){
        int q;cin>>q;
        priority_queue<pii>v;
        int cnt=0;
        while(q--){
            cnt++;
            int x,y;cin>>x>>y;
            if(x<=10)v.push({y,cnt});
        }
        cout<<v.top().second<<endl;
    }
    return 0;
}