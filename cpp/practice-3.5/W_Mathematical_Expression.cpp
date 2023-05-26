#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    long long int c;
    char ch,ch1;
    cin>>a>>ch>>b>>ch1>>c;
    if((ch=='+'&&(a+b)==c)||(ch=='-'&&(a-b)==c)||(ch=='*'&&(a*b)==c)) cout<<"Yes";
    else{
        if(ch=='+') cout<<a+b;
        else if(ch=='-') cout<<a-b;
        else if(ch=='*') cout<<a*b;
    }
    return 0;
}