#include <bits/stdc++.h> 
using namespace std;

queue<int> reverseQueue(queue<int> q)
{
    stack<int> st;
    while(!q.empty()){  // values pushed in stack
        st.push(q.front());
        q.pop();
    }

    while(!st.empty()){
        q.push(st.top()); // values pushed in queue reversely//
        st.pop();
    }

    return q;
}
