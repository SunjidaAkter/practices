/*
Question: You will be given an undirected graph as input. This graph will contain only one connected component. The edge number will be exactly node-1. Then take a node from the input and print its height. Consider root as 1.

*Sample Input
? 7 
? 6
? 1 2
? 2 4
? 2 5
? 1 3
? 3 6
? 1 7
? 1
*Sample Output
? height of 1 = 2

! *********************************************** !

*Sample Input
? 7 
? 6
? 1 2
? 2 4
? 2 5
? 1 3
? 3 6
? 1 7
? 7
*Sample Output
? height of 7 = 0


*/

#include<bits/stdc++.h>
using namespace std;

const int N=1e5+5;
vector<int>adj[N];
bool visited[N];
int height[N];
void dfs(int u){
    visited[u]=true;
    for(int v:adj[u]){
        if(visited[v])continue;
        dfs(v);
        height[u]=max(height[v]+1,height[u]);
    }
}
int main(){
    int m,n;cin>>n>>m;
    for(int i=1;i<=m;i++){
        int u,v;cin>>u>>v;
        adj[u].push_back(v);
    }
    int x;cin>>x;
    dfs(1);
    cout<<"height of "<<x<<" = "<<height[x];
    return 0;
}