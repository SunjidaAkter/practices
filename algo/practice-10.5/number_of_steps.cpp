/*
*Question: You are given a 2D grid which will contain only the characters ‘s’, ‘.’, ‘x’ and ‘e’. The size of the grid is N*M squares, where ‘s’ means where you should start, ‘.’ means there is a path, ‘x’ means there is no path and ‘e’ means where you should stop. You can walk left, right, up, and down through the cell of squares. You need to tell the minimum number of steps you need to go from ‘S’ to ‘E’. There will be exactly one ‘s’ and one ‘e’. If there is no path, print -1.
!Sample Input
?6 5
?.s.x.
?...x.
?..x..
?..x..
?..xex
?.....
!Sample Output
?8
!Sample Input
?5 5
?.s.x.
?...x.
?..x..
?..x..
?..xex
!Sample Output
?-1
!Sample Input
?5 5
?.....
?.....
?.x..e
?s.x..
?....x
!Sample Output
?7
*/
#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>pii;
int m,n;
typedef pair<int,int>pii;
const int N=1e3+10;
vector<string>g;
int visited[N][N];
int level[N][N];
pii parents[N][N];
vector<pii>direc={{0,1},{0,-1},{1,0},{-1,0}};
bool is_valid(int i,int j){
    return (i>=0&&i<m&&j>=0&&j<n);
}
void bfs(int si,int sj){
    queue<pii>q;
    q.push({si,sj});
    visited[si][sj]=true;
    level[si][sj]=0;
    parents[si][sj]={-1,-1};
    while(!q.empty()){
        pii u=q.front();
        int ui=u.first;
        int uj=u.second;
        q.pop();
        for(pii d:direc){
            int vi=ui+d.first; 
            int vj=uj+d.second;
            if(is_valid(vi,vj) && !visited[vi][vj] && g[vi][vj]!='x'){
                q.push({vi,vj});
                visited[vi][vj]=true;
                level[vi][vj]=level[ui][uj]+1;
                parents[vi][vj]={ui,uj};
            }
        }
    }
}
int main(){
    int si,sj,di,dj;
    cin>>m>>n;
    for(int i=0;i<m;i++){
        string x;cin>>x;
        for(int j=0;j<n;j++){
            if(x[j]=='s'){
                si=i,sj=j;
            }
            if(x[j]=='e'){
                di=i,dj=j;
            }
        }
        g.push_back(x);
    }
    bfs(si,sj);
    if(level[di][dj]!=0){
        cout<<level[di][dj];
    }else cout<<-1;
    return 0;
}