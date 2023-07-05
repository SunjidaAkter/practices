/*
Question: Take a stack of size N and a queue of size M as input. Then check if both of them are the same or not in the order of removing. You should use STL to solve this problem.

Sample Input
5
10 20 30 40 50
5
10 20 30 40 50
Sample Output
NO
Sample Input
5
10 20 30 40 50
4
10 20 30 40
Sample Output
NO
Sample Input
5
10 20 30 40 50
5
50 40 30 20 10
Sample Output
YES


*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    bool flag=true;
    stack<int>st;
    queue<int>q;
    int m;cin>>m;
    for(int i=0;i<m;i++){
        int x;cin>>x;
        st.push(x);
    }
    int n;cin>>n;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        q.push(x);
    }
    if(m==n){
        while (!q.empty()){
            if(q.front()!=st.top()){
                flag=false;
                break;
            }
            q.pop();st.pop();
        }   
    }else flag=false;
    if(flag)cout<<"YES";
    else cout<<"NO";
    return 0;
}