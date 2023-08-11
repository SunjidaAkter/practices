/*
*Question: You will be given an undirected graph as input. This graph will contain only one connected component. The edge number will be exactly node-1. Then take a node from the input and print its level. Consider root as 1.

!Sample Input
?7 
?6
?1 2
?2 4
?2 5
?1 3
?3 6
?1 7
?7
!Sample Output
?Level of 7 = 1
!Sample Input
?8 
?7
?1 2
?2 4
?2 5
?1 3
?3 6
?1 7
?4 8
?8
!Sample Output
Level of 8 = 3

*/
#include<bits/stdc++.h>
using namespace std;

const int N=1e5+5;
vector<int>adj[N];
int visited[N];
int level[N];
void bfs(int s){
    queue<int>q;
    q.push(s);
    visited[s]=true;
    level[s]=0;
    while(!q.empty()){
        int u=q.front();
        q.pop();
        for(int v:adj[u]){
            if(visited[v])continue;
            q.push(v);
            level[v]=level[u]+1;
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
    int x;cin>>x;
    bfs(1);
    cout<<"Level of "<<x<<" = "<<level[x];
    return 0;
}