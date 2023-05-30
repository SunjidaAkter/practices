// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     string s,s1;
//     getline(cin,s);
//     stringstream ss;
//     ss<<s;
//     string word;
//     ss>>word;
//     reverse(word.begin(),word.end());
//     cout<<word;
//     while(ss>>word){
//         reverse(word.begin(),word.end());
//         cout<<" "<<word;
//     }
//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s,s1;
    getline(cin,s);
    stringstream ss(s);
    // ss<<s;
    string word;
    while(ss>>word){
        reverse(word.begin(),word.end());
        s1=s1+word+" ";
    }
    s1.resize(s1.size()-1);
    cout<<s1;
    return 0;
}