// Doubly Linked List : Create node & link them , 
// print, reverse print, size count .

#include<bits/stdc++.h>
using namespace std;

class Doubly_node{
    public:
        int val;
        Doubly_node* next ;
        Doubly_node* prev ;
        Doubly_node (int val){
            this->val= val;
            this->next = NULL ;
            this->prev= NULL ;
        }
};

void print_DLL(Doubly_node *head){
    Doubly_node *tmp =head ;
    while(tmp != NULL){
        cout<< tmp->val << " " ;
        tmp = tmp->next ;
    }
    cout<< endl ;
}

void print_Reverse_DLL(Doubly_node *tail){
    Doubly_node *tmp = tail ;
    while(tmp != NULL){
        cout<< tmp->val << " " ;
        tmp = tmp->prev ;
    }
    cout<< endl ;
}

int sizeDLL(Doubly_node *head){
    Doubly_node *tmp =head ;
    int cnt=0 ;
    while(tmp!= NULL){
        cnt++ ;
        tmp= tmp->next ;
    }
    return cnt ;
}

int main(){
    Doubly_node *head = new Doubly_node(10) ;
    Doubly_node *a = new Doubly_node(20) ;
    Doubly_node *b = new Doubly_node(30) ;
    Doubly_node *c = new Doubly_node(40) ;
    Doubly_node *tail = c ;
    
    head->next = a;
    a->next =b ;
    b->next = c;

    c->prev = b ;
    b->prev = a ;
    a->prev= head ;

    print_DLL(head);
    print_Reverse_DLL(tail) ;
    cout<< " size: " << sizeDLL(head) << endl ;
    return 0 ;

}