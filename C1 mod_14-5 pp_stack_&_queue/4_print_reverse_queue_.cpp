// Take a queue of size N as input. You need to copy those elements in
//another queue in reverse order. You might use stack here.
// After copying in another queue, print the elements of that queue.

#include<bits/stdc++.h>
using namespace std;

int main(){
    queue<int> q;
    int n; cin>>n;
    for(int i=0; i<n; i++){
        int x;
        cin>>x ;
        q.push(x); //10(front) 20 30
    }
    
    stack<int> st;
    queue<int> q2;
    while(!q.empty()){
        st.push(q.front()); //10 20 30(top)
        q.pop();
    }

    while(!st.empty()){
        q2.push(st.top()); // 30(front) 20 10
        st.pop();
    }

    while(!q2.empty()){
        cout<< q2.front() <<" " ; //print: 30 20 10
        q2.pop();
    }
    return 0 ;
}