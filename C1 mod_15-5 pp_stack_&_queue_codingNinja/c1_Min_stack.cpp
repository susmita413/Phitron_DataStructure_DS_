#include<bits/stdc++.h>
using namespace std;

class MinStack {
public:
    stack<int> st, mn;
    MinStack() {

    }

    void push(int val) {
        if(st.empty()){
            st.push(val);
            mn.push(val);
            return;
        }
        int minVal = min(val, mn.top());
        mn.push(minVal);
        st.push(val);
    }

    void pop() {
        if(st.empty()) return;
        st.pop();
        mn.pop();
    }

    int top() {
        return st.top();
    }

    int getMin() {
        return mn.top();
    }
};