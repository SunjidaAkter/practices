#include<bits/stdc++.h>
using namespace std;
int main(){
    int count=0;
    bool found=false;
    string s;
    getline(cin,s);
    for(char c:s){
        if(isalpha(c)){
           if(found==false){
            count++;
            found=true;
           } 
        }else{
            found=false;
        }
    }
    cout<<count;
    return 0;
}