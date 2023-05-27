#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[3],mx=INT_MIN,mn=INT_MAX;
    for(int i=0;i<3;i++){
        cin>>a[i];
        mx=max(mx,a[i]);
        mn=min(mn,a[i]);
    }
    cout<<mn<<" "<<mx;
    return 0;
}