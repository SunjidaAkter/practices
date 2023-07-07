/*
Question: Take a queue of size N as input. You need to copy those elements in another queue in reverse order. You might use stack here. You should use STL to solve this problem. After copying in another queue, print the elements of that queue.

Sample Input
5
10 20 30 40 50
Sample Output
50 40 30 20 10


*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    queue<int>q1;
    queue<int>q2;
    stack<int>st;
    int n;cin>>n;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        q1.push(x);
    }
    while(!q1.empty()){
        st.push(q1.front());
        q1.pop();
    }
    while(!st.empty()){
        q2.push(st.top());
        st.pop();
    }
    while(!q2.empty()){
        cout<<q2.front()<<" ";
        q2.pop();
    }
    return 0;
}