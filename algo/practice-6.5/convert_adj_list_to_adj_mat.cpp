/*
*Question: You will be given a directed graph as input. Store this graph in an adjacency list. Now, convert this adjacency list to an adjacency matrix (index starting from 1) and print it. Consider root as 1.



*Sample Input
? 3
? 5
? 1 2
? 2 3
? 1 3
? 3 1
? 3 2
*Sample Output
? 0 1 1
? 0 0 1
? 1 1 0


*/
#include<bits/stdc++.h>
using namespace std;

const int N=1e3+5;
vector<int>v[N];
int adjMat[N][N];
int main(){
    int m,n;cin>>n>>m;
    for(int i=1;i<=m;i++){
        int x,y;cin>>x>>y;
        v[x].push_back(y);
    }
    for(int i=1;i<=n;i++){
        for(int j:v[i]){
           adjMat[i][j]=1;
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<adjMat[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}