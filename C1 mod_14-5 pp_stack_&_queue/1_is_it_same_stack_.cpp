#include<bits/stdc++.h>
using namespace std;

class D_node{
public:
    int val;
    D_node *next;
    D_node *prev;
    D_node (int val){
        this->val= val;
        this->next= NULL;
        this->prev= NULL;
    }
};

class myStack{
public:
    D_node *head = NULL;
    D_node *tail= NULL;
    int sz=0 ;
    void push(int val){  //tail insert
        sz++ ;
        D_node *newNode = new D_node(val);
        if (head==NULL){
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        newNode->prev = tail;
        tail= tail->next;
    }

    void pop(){       //tail delete
        sz--;
        D_node *delNode = tail;
        tail= tail->prev;
        if(tail==NULL)
            head= NULL;
        else
            tail->next = NULL;

        delete delNode;
    }

    int top(){  //tail show
        return tail->val;
    }
    
    int size(){
        return sz;
    }

    bool empty(){
        if(sz==0) return true;
        else return false;
    }
};

int main(){
    myStack st1, st2;
    int n; cin>> n ; // 'n' number of stack value
    for(int i=1; i<=n ; i++){   //O(n)
        int x;
        cin >> x ;
        st1.push(x) ;
    }
    
    int m; cin>> m ; // 'm' number of stack value

    for(int i=1; i<=m ; i++){   //O(m)
        int x;
        cin >> x ;
        st2.push(x) ;
    }

    bool flag =true;  //same
    if(st1.size() != st2.size()){
        flag = false;  //Not same
    }
    else {
        while(!st1.empty() && !st2.empty()){ 
            if(st1.top() != st2.top()){
                flag = false;  //Not same
                break;
            }
            st1.pop();
            st2.pop();
        }
    }

    cout<< ((flag==true)?  "Yes" : "No") <<endl;  
    cout <<(flag? "Yes" : "No") << endl;

    return 0 ;
}