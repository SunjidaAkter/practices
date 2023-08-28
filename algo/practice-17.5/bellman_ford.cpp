#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1e7;
class Edges{
    public:
        int u;
        int v;
        int w;
        Edges(int u,int v,int w){
            this->u=u;
            this->v=v;
            this->w=w;
        }
};
int main(){
    int n,e;cin>>n>>e;
    vector<Edges>a;
    while(e--){
        int u,v,w;cin>>u>>v>>w;
        Edges ed(u,v,w);
        a.push_back(ed);
    }
    int dis[n+1];
    for(int i=1;i<=n;i++){
        dis[i]=INT_MAX;
    }
    dis[1]=0;
    for(int i=1;i<=n-1;i++){
        for(int j=0;j<a.size();j++){
            Edges ed=a[j];
            int u=ed.u;
            int v=ed.v;
            int w=ed.w;
            if(dis[u]<INT_MAX&&dis[u]+w<dis[v]){
                dis[v]=dis[u]+w;
            }
        }
    }
    for(int i=1;i<=n;i++){
        if(dis[i]==N)cout<<30000<<" ";
        else cout<<dis[i]<<" ";
    }
    return 0;
}