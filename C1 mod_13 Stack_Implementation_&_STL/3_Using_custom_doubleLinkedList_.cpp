#include<bits/stdc++.h>
using namespace std;

class DLL_Node{
    public:
    int val;
    DLL_Node *next ;
    DLL_Node *prev ;
    DLL_Node(int val){
        this->val = val ;
        this->next = NULL;
        this->prev = NULL ;
    }
};

class myStack{
    public:
    DLL_Node *head = NULL ; //using double linked list for implementing stack
    DLL_Node *tail = NULL ;
    int sz = 0 ;     // To keep track of size

    void push(int val){  // O(1)
        sz++ ;
        DLL_Node *newNode = new DLL_Node(val);
        if (head == NULL){   // if stack is empty
            head = newNode ;
            tail = newNode ;
            return ;
        }
        newNode->prev = tail ;
        tail->next = newNode ;
        tail = tail->next ;
    }

    void pop (){     // O(1)
        sz-- ;
        DLL_Node *deleteNode = tail ;
        tail = tail->prev ;
        if (tail==NULL)     // if stack has 1 node
            head = NULL ;
        else                // if stack has more than 1 node
            tail->next = NULL ;

        delete deleteNode ;
    }
    
    int top(){       // O(1)
        return tail->val;
    }

    int size(){      // O(1)
        return sz;
    }

    bool empty(){   // O(1)
        if(sz==0) return true;
        else return false ;
    }

};

int main(){
    myStack st;
    int n; cin>> n ; // 'n' number of stack value

    for(int i=1; i<=n ; i++){   //# total complexity= O(n)
        int x;
        cin >> x ;
        st.push(x) ;
    }
    cout<< "Top= " << st.top()<< endl ;

    while(st.empty() == false){ //Loop will continue till Stack Empty
        cout<< st.top()<< endl ;
        st.pop();
    }

    return 0 ;
}