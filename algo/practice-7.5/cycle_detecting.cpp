/*
*Question: You will be given an undirected graph as input. Now print “YES” if there is a cycle and print “NO” if there isn’t any cycle. Consider root as 1.


!Sample Input
?4
?4
?1 2
?2 3
?3 4
?4 2
!Sample Output
?YES
!Sample Input
?6
?4
?1 2
?2 3
?3 4
?5 6
!Sample Output
?NO
*/

#include<bits/stdc++.h>
using namespace std;

const int N=1e5+5;
vector<int>adj[N];
int visited[N];
bool dfs(int u,int p=-1){
    bool cycle=false;
    visited[u]=true;
    for(int v:adj[u]){
        if(v==p)continue;
        if(visited[v])return true;
        cycle|=dfs(v,u);
    }
    return cycle;
}
int main(){
    int m,n;cin>>n>>m;
    for(int i=1;i<=m;i++){
        int u,v;cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    if(dfs(1))cout<<"YES";
    else cout<<"NO";
    return 0;
}