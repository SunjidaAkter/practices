/*
 * Question: You will be given an undirected graph. Print its DFS traversal in reverse order. Consider root as 1.

*Sample Input
? 4 
? 4
? 1 2
? 4 3
? 3 2
? 2 4
*Sample Output
? 3 4 2 1
? ( 4 3 2 1 is also valid ans)

 */
#include<bits/stdc++.h>
using namespace std;

const int N=1e5+5;
vector<int>adj[N];
bool visited[N];
void dfs(int u){
    visited[u]=true;
    for(int v:adj[u]){
        if(visited[v])continue;
        dfs(v);
    cout<<v<<" ";
    }
}
int main(){
    int m,n;cin>>n>>m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            int u,v;cin>>u>>v;
            adj[u].push_back(v);
        }
    }
    dfs(1);
    cout<<1;
    return 0;
}