#include <bits/stdc++.h> 
// Implement class for minStack.

class minStack
{
	// Write your code here.
	public:
		stack<int>st;
		stack<int>minSt;
		// Constructor
		minStack() 
		{ 
			// Write your code here.
		}
		
		// Function to add another element equal to num at the top of stack.
		void push(int num)
		{
			// Write your code here.
			st.push(num);
			if((!minSt.empty() && num<=minSt.top())||minSt.empty()){
				minSt.push(num);
			}
		}
		
		// Function to remove the top element of the stack.
		int pop()
		{
			// Write your code here.
			if(st.empty())return -1;
			int x=st.top();
			st.pop();
			if(!minSt.empty()&& x==minSt.top()){
				minSt.pop();
			}
			return x;
		}
		
		// Function to return the top element of stack if it is present. Otherwise return -1.
		int top()
		{
			// Write your code here.
			if(st.empty())return -1;
			return st.top();
		}
		
		// Function to return minimum element of stack if it is present. Otherwise return -1.
		int getMin()
		{
			// Write your code here.
			if(minSt.empty())return -1;
			return minSt.top();
		}
};