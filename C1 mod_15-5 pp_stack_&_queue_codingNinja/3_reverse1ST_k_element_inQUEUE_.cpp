#include <bits/stdc++.h> 
using namespace std;

queue<int> reverseElements(queue<int> q, int k){ //q= 1 2 3 4 5
    stack<int> st;
    for(int i=0; i<k; i++){ //k=3
        st.push(q.front()); //st = 1 2 3(top)
        q.pop();
    }

    queue<int> q2;
    while(!q.empty()){
        q2.push(q.front()); //q2= 4(front) 5
        q.pop();
    }

    while(!st.empty()){
        q.push(st.top()); // q= 3(front) 2 1
        st.pop();
    }

    while(!q2.empty()){
        q.push(q2.front()); //q= 3(front) 2 1 4 5
        q2.pop();
    }
    return q;
}

//OR-----------

queue<int> reverseElements(queue<int> q, int k){ //q= 1 2 3 4 5
    stack<int> st;
    for(int i=0; i<k; i++){ //k=3
        st.push(q.front()); //st = 1 2 3(top)
        q.pop();
    }
                            // q= 4 5
    queue<int> q2;
    while(!st.empty()){
        q2.push(st.top()); // q2= 3(front) 2 1
        st.pop();
    }

    while(!q.empty()){
        q2.push(q.front()); //q= 3(front) 2 1 4 5
        q.pop();
    }
    return q2;
}
