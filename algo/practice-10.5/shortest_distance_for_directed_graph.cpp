/*
*Question: You will be given a directed weighted graph. At first you will be given N, the number of nodes then you will be given M, the number of edges. The value of nodes are from 1 to N. Next M lines will contain A, B and W which means there is an edge from A to B where the cost is W. There will be no negative weight in the graph.
*Also, you will be given a source and a destination. You need to tell the shortest distance between source and destination.
!Sample Input
?6 9
?1 2 5
?2 3 2
?1 3 10
?3 4 1
?4 1 5
?1 5 9
?5 6 1
?2 6 4
?2 5 2
?4 6
!Sample Output
?13

!The shortest path is 4-> 1-> 2-> 5-> 6, so the shortest distance is 13.
*/
#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>pii;
const int N=1e3+5;
const int INF=1e9+10;
vector<int>dist(N,INF);
vector<pii>g[N];
bool visited[N];
void dijkstra(int source){
    priority_queue<pii,vector<pii>,greater<pii>>pq;
    dist[source]=0;
    pq.push({dist[source],source});
    while(!pq.empty()){
        int u=pq.top().second;
        pq.pop();
        visited[u]=true;
        for(pii child_pair:g[u]){
            int v=child_pair.first;
            int w=child_pair.second;
            if(visited[v])continue;
            if(dist[v]>dist[u]+w){
                dist[v]=dist[u]+w;
                pq.push({dist[v],v});
            }
        }
    }
}
int main(){
    int m,n;
    cin>>n>>m;
    for(int i=0;i<m;i++){
        int u,v,w;cin>>u>>v>>w;
        g[u].push_back({v,w});
    }
    int x,y;cin>>x>>y;    
    dijkstra(x);
    cout<<dist[y];
    return 0;
}