#include<bits/stdc++.h>
using namespace std;

class Singly_node{
    public:
        int val;
        Singly_node *next ;
        Singly_node(int val){
            this->val = val ;
            this->next = NULL ;
        }
};


void insert_at_tail(Singly_node *&head, Singly_node *&tail,int v){ //O(1)
    Singly_node *newNode= new Singly_node(v) ;
    if(head == NULL){
        head = newNode;
        tail = newNode ;
        return ;
    }
    tail->next = newNode ;
    tail = newNode ;
}


void print_LinkedList(Singly_node *head){  // O(n)
    cout<<" your linked list= " ;
    Singly_node *tmp = head; 
    while(tmp != NULL){
        cout << tmp->val << " " ;
        tmp= tmp->next ;
    }
    cout<< endl ;
}


int main(){
    Singly_node *head = NULL ; 
    Singly_node *tail = NULL ;

    int val ;
    while(true){
        cin>> val ;
        if(val==-1) break;
        insert_at_tail(head, tail, val) ; // O(1)
    }
    print_LinkedList(head) ;


    cout<<endl<<" after sort:" << endl ;
    for(Singly_node *i= head; i->next != NULL; i=i->next){
        for(Singly_node *j= i->next; j != NULL ; j= j->next){
            // if(i->val > j->val){  // Ascending 
            //      swap(i->val, j->val);
            // }
            if(i->val < j->val){  // Descending 
                 swap(i->val, j->val);
            }
        }
    }
    print_LinkedList(head) ;
    

    return 0;


}
