#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n,f[26]={0},count=0;
        cin>>n;
        for(int j=0;j<n;j++){
            char c;
            cin>>c;
            if(f[c-'A']==0){
                count+=2;
                f[c-'A']++;
            }else if(f[c-'A']>0){
                count++;
                f[c-'A']++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}