// Insert An Element At Its Bottom In A Given Stack
#include <bits/stdc++.h> 
using namespace std;

stack<int> pushAtBottom(stack<int>& st, int x) 
{
    stack<int> newSt;
    while(!st.empty()){
        newSt.push(st.top()); //reversely pushed in newSt
        st.pop();
    }
    newSt.push(x);

    while(!newSt.empty()){
        st.push(newSt.top());//reversely pushed in "st" from "newSt"
        newSt.pop();
    }
    
    return st; //return UPDATED STACK
}
