#include<bits/stdc++.h>
using namespace std;

// singly linked list
class S_node{
    public:
        int val;
        S_node *next ;
        S_node (int val){
            this->val = val;
            this->next = NULL ;
        }
};

class myQueue{
    public:
    S_node *head = NULL;
    S_node *tail = NULL;
    int sz= 0;
    void push(int val){     //tail insert //O(1)
        sz++ ;
        S_node *newNode = new S_node(val);
        if(head == NULL){
            head = newNode ;
            tail = newNode ;
            return ;
        }
        tail->next = newNode ;
        tail = tail->next ;
    }

    void pop(){     //head delete  //O(1)
        sz-- ;
        S_node *deleteNode = head ;
        head = head->next ;
        if(head ==NULL){
            tail = NULL ;
        }
        delete deleteNode ;
    }

    int front(){     //O(1)
        return head->val ;
    }
    int size(){      //O(1)
        return sz ;
    }
    bool empty(){    //O(1)
        if(sz==0) return true ;
        else  return false ;
    }

};


int main(){
    myQueue q;
    // q.push(10);
    // q.push(20);
    // q.push(30);
    // q.pop();
    // cout << q.size() << endl ;
    // cout << q.front() << endl ;

    int n;
    cin>> n;
    for(int i=0; i<n; i++){   //O(n)
        int x;
        cin>> x;
        q.push(x);
    }
    cout <<endl<<"size: " << q.size() << endl ;
    cout <<"front: " << q.front() <<endl<< endl ;
    
    while(!q.empty()){       // print
        cout<< q.front() << endl ;
        q.pop();
    }
    
    if(q.empty())
        cout << "Queue is empty." ;
    return 0 ;
}