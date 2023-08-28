#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1e9;
class Edges{
    public:
        int u;
        int v;
        int w;
        Edges(int u,int v,int w){
            this->u=u;
            this->v=v;
            this->w=w;
        }
};
int main(){
    int n;cin>>n;
    int a[n][n];
    int dis[n+1][n+1];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
            if(a[i][j]==-1){
                dis[i+1][j+1]=N;
            }else if( a[i][j]==0){
                dis[i+1][j+1]=0;
            }else{
                dis[i+1][j+1]=a[i][j];
            }    
        }
    }
    for(int k=1;k<=n;k++){
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                dis[i][j]=min(dis[i][k]+dis[k][j],dis[i][j]);
            }
        }
    }
    int mx=INT_MIN;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(dis[i][j]!=N)
            mx=max(mx,dis[i][j]);
        }
    }
    cout<<mx;
    return 0;
}