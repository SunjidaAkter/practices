/*
*Question: You will be given an undirected graph as input. Now count its connected components and print it.

!Sample Input
?6
?4
?1 2
?2 3
?3 4
?5 6
!Sample Output
?2
!Sample Input
?7
?4
?1 2
?2 3
?3 4
?5 6
!Sample Output
?3


*/
#include<bits/stdc++.h>
using namespace std;

const int N=1e5+5;
vector<int>adj[N];
int visited[N];
void bfs(int s){
    queue<int>q;
    q.push(s);
    visited[s]=true;
    while(!q.empty()){
        int u=q.front();
        q.pop();
        for(int v:adj[u]){
            if(visited[v])continue;
            q.push(v);
            visited[v]=true;
        }
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
        bfs(i);
        cc++;
    }
    cout<<cc;
    return 0;
}

