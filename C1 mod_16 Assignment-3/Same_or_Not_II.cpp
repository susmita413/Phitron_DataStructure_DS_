//  You need to determine whether the stack and queue 
//are the same or not based on the order in which the elements are removed.
// not using STL stack, queue

#include<bits/stdc++.h>
using namespace std;

class MyStack{
public:
    list<int> l;
    void push(int val){
        l.push_back(val);  
    }
    void pop(){
        l.pop_back();
    }
    int top(){
        return l.back();
    }
    int size(){
        return l.size();
    }
    bool empty(){
        if(l.size()==0) return true;
        else return false;
    }
};

class MyQueue{
public:
    list<int> l2;
    void push(int val){
        l2.push_back(val);
    }
    void pop(){
        l2.pop_front();
    }
    int front(){
        return l2.front();
    }
    int size(){
        return l2.size();
    }
    bool empty(){
        if(l2.size()==0) return true;
        else return false;
    }
};

int main(){
    stack<int> st;
    queue<int> qu;
    int n,m;
    int x;
    cin>>n ;
    cin>>m ;
    for(int i=1; i<=n; i++){
        cin>> x;
        st.push(x);
    }
    for(int i=1; i<=m; i++){
        cin>> x;
        qu.push(x);
    }

    bool flag= true;
    while(!qu.empty() && !st.empty()){
        if(qu.front()== st.top()){
            qu.pop();
            st.pop();
        }
        else{
            flag= false;
            break;
        }

        if(qu.empty() && !st.empty()){
            flag= false;
            break;
        }
        else if(!qu.empty() && st.empty()){
            flag= false;
            break;
        } 

    }
    if(flag == true) cout<<"YES" << endl;
    else cout<<"NO" << endl;


    return 0 ;
}