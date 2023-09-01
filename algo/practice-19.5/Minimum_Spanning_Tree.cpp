#include<bits/stdc++.h>
using namespace std;
#define ll long long
class Edge{
    public:
    int u,v;
    ll w;
    Edge(int u,int v,ll w){
        this->u=u;
        this->v=v;
        this->w=w;
    }
};
bool cmp(Edge a,Edge b){
    return a.w<b.w;
}
const int N=1e5+5;
int parent[N];
int parentSize[N];
void dsu_set(int n){
    for(int i=1;i<=n;i++){
        parent[i]=-1;
        parentSize[i]=1;
    }
}
int dsu_find(int n){
    while(parent[n]!=-1){
        n=parent[n];
    }
    return n;
}
void dsu_union(int a,int b){
    int leaderA=dsu_find(a);
    int leaderB=dsu_find(b);
    if(leaderA!=leaderB){
        if(parentSize[leaderA]>parentSize[leaderB]){
            parent[leaderB]=leaderA;
            parentSize[leaderA]+=parentSize[leaderB];
        }else{
            parent[leaderA]=leaderB;
            parentSize[leaderB]+=parentSize[leaderA];
        }
    }
}
int main(){
    int n,m;cin>>n>>m;
    vector<Edge>a;
    vector<Edge>ans;
    dsu_set(n);
    while(m--){
        int u,v;ll w;
        cin>>u>>v>>w;
        a.push_back(Edge(u,v,w));
    }
    sort(a.begin(),a.end(),cmp);
    for(Edge val:a){
        int u=val.u;
        int v=val.v;
        ll w=val.w;
        int leaderA=dsu_find(u);
        int leaderB=dsu_find(v);
        if(leaderA==leaderB)continue;
        ans.push_back(val);
        dsu_union(u,v);
    }
    ll sum=0;
    for(Edge val:ans){
        sum+=(val.w);
    }
    cout<<sum;
    return 0;
}
