#include<bits/stdc++.h>
using namespace std;


void reverseStack(stack<int> &s) {
    if (s.empty()) return;      // BASE CASE
    
    int x= s.top();
    s.pop();
    reverseStack(s) ;
                    // suppose i get reverse STACK
                    // now, INSERT x at the bottom
    stack<int> cp; //copy stack
    while(!s.empty()){
        cp.push(s.top());
        s.pop();
    }
    cp.push(x);

    while(!cp.empty()){
        s.push(cp.top());
        cp.pop();
    }

}