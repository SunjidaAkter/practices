/*
*Question: You will be given an undirected graph. Print its BFS traversal in reverse order. Consider root as 1.

!Sample Input
?4 
?4
?1 2
?3 4
?1 3
?2 4
!Sample Output
?4 3 2 1
?(4 2 3 1 is also valid ans)

*/
#include<bits/stdc++.h>
using namespace std;

const int N=1e5+5;
vector<int>adj[N];
int visited[N];
stack<int>st;
void bfs(int s){
    queue<int>q;
    q.push(s);
    st.push(s);
    visited[s]=true;
    while(!q.empty()){
        int u=q.front();
        q.pop();
        for(int v:adj[u]){
            if(visited[v])continue;
            q.push(v);
            st.push(v);
            visited[v]=true;
        }
    }
}
int main(){
    int m,n;cin>>n>>m;
    for(int i=1;i<=n;i++){
        int u,v;cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    bfs(1);
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    return 0;
}