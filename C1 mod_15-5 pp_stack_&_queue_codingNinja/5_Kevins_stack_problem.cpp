#include <bits/stdc++.h> 
using namespace std;

string kevinStackProblem(string &s)
{
	stack<char> st;
	for(char x: s){
		st.push(x);
	}
	
	s="" ;
    //string ans= "" ; //or

	while(!st.empty()){
		s += st.top();
		//ans += st.top();  //or
		st.pop();
	}
	return s;
	//return ans;  //or
}
