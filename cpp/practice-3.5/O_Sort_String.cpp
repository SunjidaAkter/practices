#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int ch[n];
    for(int i=0;i<n;i++){
        char c;
        cin>>c;
        if(c>96){
            ch[i]=c-'a';
        }
    }
    sort(ch,ch+n);
    for(int i=0;i<n;i++){
            char b=ch[i]+'a';
            cout<<b;        
    }
    return 0;
}