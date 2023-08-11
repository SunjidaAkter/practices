/*
*Question: You will be given an undirected graph as input. Now count its connected components and print it. Then print All the nodes in a connected component. See the sample output for more clarification.

!Sample Input
?6
?4
?1 2
?2 3
?3 4
?5 6
!Sample Output
?2
?Component 1 : 1 2 3 4
?Component 2 : 5 6
!Sample Input
?8
?4
?1 2
?2 3
?3 4
?5 6
!Sample Output
?4
?Component 1 : 1 2 3 4
?Component 2 : 5 6
?Component 3 : 7
?Component 4 : 8


*/
#include<bits/stdc++.h>
using namespace std;

const int N=1e5+5;
vector<int>adj[N];
int visited[N];
set<int>s;
void dfs(int u){
    visited[u]=true;
    s.insert(u);
    for(int v:adj[u]){
        if(visited[v])continue;
        // cout<<v<<" ";
        s.insert(v);
        dfs(v);
    }
}
int main(){
    int m,n;cin>>n>>m;
    for(int i=1;i<=m;i++){
        int u,v;cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    int cc=0;
    for(int i=1;i<=n;i++){
        if(visited[i])continue;
        dfs(i);
        cc++;
    }
    cout<<cc<<endl;
    cc=0;
    for(int i=1;i<=n;i++){
        visited[i]=false;
    }
    for(int i=1;i<=n;i++){
        if(visited[i])continue;
        s.clear();
        dfs(i);
        cc++;
        cout<<"Component "<<cc<<" : ";
        while(!s.empty()){
            cout<<*s.begin()<<" ";
            s.erase(*s.begin());
        }
        cout<<endl;
    }
    return 0;
}