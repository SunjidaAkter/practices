#include<bits/stdc++.h>
using namespace std;
long long int fun(long long int x,long long int n){
    double sum=0.0;
    for(int i=2;i<=n;i+=2){
        sum+=pow(x*1.0,i*1.0);
    }
    return (long long int)sum;
} 
int main(){
    long long int x,n;
    cin>>x>>n;
    cout<<fun(x,n);
    return 0;
}