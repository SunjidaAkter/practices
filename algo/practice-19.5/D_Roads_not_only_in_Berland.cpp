#include<bits/stdc++.h>
using namespace std;
#define ll long long
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
    int n;cin>>n;int e=n-1;
    vector<pair<int,int>>v;
    vector<pair<int,int>>v1;
    vector<pair<int,int>>v2;
    dsu_set(n);
    while(e--){
        int x,y;cin>>x>>y;
        v.push_back({x,y});
    }
    int cnt=0;
    for(pair<int,int> val:v){
        int a=val.first;
        int b=val.second;
        int leaderA=dsu_find(a);
        int leaderB=dsu_find(b);
        if(leaderA==leaderB){
            // cout<<leaderA<<" "<<leaderB<<endl;
            v1.push_back(val);
            cnt++;
        }else{
            v2.push_back(val);
            dsu_union(a,b);
        }
    }
    if(cnt==n-1)cout<<0;
    else{
        cout<<v1.size()<<endl;
        vector<int>leaders;
        for(int i=1;i<=n;i++){
            int l=dsu_find(i);
            if(l==i)leaders.push_back(l);
        } 
        int i=0;
        for(auto val:v1){
            cout<<val.first<<" "<<val.second<<" "<<leaders[i]<<" "<<leaders[i+1]<<endl;
            i++;
        }
    }
    return 0;
}