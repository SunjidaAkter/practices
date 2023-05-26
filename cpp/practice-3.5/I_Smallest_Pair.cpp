#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        int a[n],b[n-1];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int sum=0,mn=INT_MAX;
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                sum=a[i] + a[j] + j - i;
                mn=min(mn,sum);
            }
        }
        cout<<mn<<endl;
    }
    return 0;
}