#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int n;cin>>n;
    if(n==2||n==3){
        for(int i=0;i<n;i++){
            char x;cin>>x;
            cout<<x;
        }
    }else{
        queue<char>q1;
        queue<char>q2;
        for(int i=0;i<n;i++){
            char x;cin>>x;
            q1.push(x);
        }
        int cnt=0; 
        while(!q1.empty()){
            q2.push(q1.front());
            cnt++;
            if(cnt%2==0)q2.push('-');
            q1.pop();
            if(q1.size()==0)q2.pop();
            if((q1.size()==3||q1.size()==2)&&cnt%2==0){
                break;
            }    
        }
        while(!q2.empty()){
            cout<<q2.front();
            q2.pop();
        }
        while(!q1.empty()){
            cout<<q1.front();
            q1.pop();
        }
    }   
    return 0;
}