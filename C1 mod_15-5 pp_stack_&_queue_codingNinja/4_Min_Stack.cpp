#include <bits/stdc++.h> 
using namespace std;

class minStack
{
	public:
		// Constructor
		minStack() { 
		}
		
		stack<int> st, minst;

		// Function to add another element at the top of stack.
		void push(int num){
			if(st.empty()){
				st.push(num);
				minst.push(num);
				return;
			}
			int minVal = min(minst.top(), num);
			minst.push(minVal);
			st.push(num);
		}
		
		// Function to remove the top element of the stack.
		int pop(){
			if(!st.empty()){
				int x= st.top();
                st.pop();
			    minst.pop();
				return x;
			}
			else
			    return -1;	
		}
		
		// Function to return the top element of stack
		int top(){
			if(!st.empty()) return st.top();
			else return -1;
		}
		
		// Function to return minimum element of stack if it is present. Otherwise return -1.
		int getMin()
		{
			if(!minst.empty()) return minst.top();
			else return -1;
		}
};