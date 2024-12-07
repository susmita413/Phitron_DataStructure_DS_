// 225. https://leetcode.com/problems/implement-stack-using-queues/description/
#include<bits/stdc++.h>
using namespace std;

class MyStack {
public:
    queue<int> q;
    
    MyStack() {
    }
    
    void push(int x) { //tail insert 
        q.push(x);
    }
    
    int pop() {   //tail delete
        queue<int> newQ; // for copying head
        int last;
        while(!q.empty()){
            int k= q.front();
            q.pop();
            if(q.empty()){ // when 1st queue is empty
                last = k;  //tail is stored in "k"
                break;
            }
            newQ.push(k);  //tail will not be insert in newQ
        }
        q= newQ; //without tail, all values will be copy from newQ to q
        return last;

    }
    
    int top() {  //tail show // 
        queue<int> newQ;
        int last;
        while(!q.empty()){     
            int k= q.front();  
            q.pop();
            if(q.empty()){     // when 1st queue is empty
                last = k;      // tail is stored in "k"
            }
            newQ.push(k);      // tail copied
        }
        q= newQ;
        return last;
    }
    
    bool empty() {
        return q.empty();
    }
};
