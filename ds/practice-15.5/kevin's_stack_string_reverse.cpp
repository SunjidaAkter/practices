#include <bits/stdc++.h> 
string kevinStackProblem(string &s)
{
	// Write your code here.
	stack<int>st;
	for(char c:s){
		st.push(c);
	}
	string newS="";
	while(!st.empty()){
		newS+=st.top();
		st.pop();
	}
	return newS;
}
