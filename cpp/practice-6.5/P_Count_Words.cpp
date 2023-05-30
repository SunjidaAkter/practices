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
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int count=0;
//     string s;
//     getline(cin,s);
//     stringstream ss;
//     ss<<s;
//     string word;
//     while(ss>>word){
//         int cnt=0;
//         for(int i=0;i<word.size();i++){
//             if(word[i]=='.'||word[i]==','||word[i]=='!'||word[i]=='?'||word[i]==' '){
//                 cnt++;
//             }
//         }
//         if(cnt==word.size()){
//             continue;   
//         }else{
//             count++;
//         }
//     }
//     cout<<count;
//     return 0;
// }