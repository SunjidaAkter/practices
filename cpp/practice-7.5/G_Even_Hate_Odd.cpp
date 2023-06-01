#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;cin>>test;
    for(int i=0;i<test;i++){
        int n,even=0,odd=0;cin>>n;int a[n];
        for(int j=0;j<n;j++){
            cin>>a[i];
            if(a[i]%2==0){
                even++;
            }else{
                odd++;
            }
        }
        if(even==odd){
            cout<<0<<endl;
        }else if(n%2!=0){
            cout<<-1<<endl;
        }else{
            cout<<abs(even-odd)/2<<endl;
        }
    }
    return 0;
}