#include <bits/stdc++.h> 
queue<int> reverseElements(queue<int> q, int k)
{
    // Write your code here.
    queue<int>q2;
    stack<int>st;
    for(int i=0;i<k;i++){
        st.push(q.front());
        q.pop();
    }
    while(!st.empty()){
        q2.push(st.top());
        st.pop();
    }
    while(!q.empty()){
        q2.push(q.front());
        q.pop();
    }
    return q2;
}
