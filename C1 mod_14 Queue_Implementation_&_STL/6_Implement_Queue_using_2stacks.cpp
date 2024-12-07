//https://leetcode.com/problems/implement-queue-using-stacks/description/

#include<bits/stdc++.h>
using namespace std;

class MyQueue {
public:
    stack<int> st;

    MyQueue() {
        
    }
    
    void push(int x) { //tail insert
        st.push(x);
    }
    
    int pop() {  //head delete
        stack<int> newSt;
        int last ;
        while(!st.empty()) {
            int k= st.top();  // top value stores in k
            st.pop();
            if(st.empty()){   // when the 1st stack is empty
                last =k ;     //the last top value stores in 'last'
                break;        //the last top value won't be store in 'newSt' STACK
            }
            newSt.push(k);   // top values store reversely
        }

        while(!newSt.empty()){ 
            st.push(newSt.top()); //the values of newSt will be copy to st STACK reversely
            newSt.pop();
        }

        return last;
    }
    
    int peek() { //head show
        stack<int> newSt;
        int last ;
        while(! st.empty()){
            int k= st.top();    // top value stores in k
            st.pop();
            if(st.empty()){     // when the 1st stack is empty
                last = k;      //the last top value stores in 'last'
            }
            newSt.push(k);    //ALL top values store reversely
        }
        
        while(!newSt.empty()){
            st.push(newSt.top()); //the values of newSt will be copy to st STACK reversely
            newSt.pop();
        }

        return last; // return last value of STACK (HEAD of QUEUE)
    }
    
    bool empty() {
        return st.empty();
    }
};
