// #include<bits/stdc++.h>
// using namespace std;
// typedef pair<int,int>pii;
// #define ll long long
// bool recur(int s){
//     // cout<<s/10<<" ";
//     if(s==1)return true;
//     else if(s==0) return false;
//     bool op1=false,op2=false;
//     if(s%10==0){
//         op1=recur(s/10) ;
//     }
//     if(s%20==0){
//         op2=recur(s/20);
//     }
//     return op1|| op2;
// } 
// int main(){
//     int n;cin>>n;
//     while(n--){
//         int s;cin>>s;
//         if(recur(s))cout<<"YES"<<endl;
//         else cout<<"NO"<<endl;
//     }
//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>pii;
#define ll long long
bool recur(ll i,ll s){
    if(s==i)return true;
    else if(i>s) return false;
    return recur(i*10,s)||recur(i*20,s);
} 
int main(){
    int n;cin>>n;
    while(n--){
        ll s;cin>>s;
        if(recur(1,s))cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}