/*
Question: Take a sentence S as input and then take another string word X as input. Then count how many times the word X appeared in the sentence. The words in the sentence are separated by spaces.



Sample Input
Sanju Samson shamanta samson jessica Bhatta Asif John takla john abraham john baby Shark tank 
john
Sample Output
2


*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    string str,s;int cnt=0;
    getline(cin,str);cin>>s;
    while(str.find(s)!=-1){
        cnt++;
        str.replace(str.find(s),s.size()," ");
    }
    cout<<cnt;
    return 0;
}