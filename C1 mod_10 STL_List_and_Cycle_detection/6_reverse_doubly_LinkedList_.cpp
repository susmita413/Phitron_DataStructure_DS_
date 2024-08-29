// Doubly linked list reverse
// Value reversed with two pointer technique

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
void normal_Reverse_DLL(Doubly_node *tail){
    Doubly_node *tmp = tail ;
    while(tmp != NULL){
        cout<< tmp->val << " " ;
        tmp = tmp->prev ;
    }
    cout<< endl ;
}


void reverse_DLL(Doubly_node *head, Doubly_node *tail) {
    Doubly_node *i = head;
    Doubly_node *j =tail ;
    while(i!=j && i->next != j){  //for oddNumber of nodes= (i != j)
                                  //for evenNumber of nodes= (i->next != j) //IN video
        swap(i->val, j->val) ;
        i= i->next ;
        j= j->prev ;
    }
    swap(i->val, j->val) ; // for even nodes, 1 node swap baki thake
                           // for odd nodes,i==j,so kono Effect porbe na.
}

// 2nd
void reverse_DLL2(Doubly_node *head, Doubly_node *tail) {
    Doubly_node *i = head;
    Doubly_node *j =tail ;
    while(i!=j && i->prev != j){  //for oddNumber of nodes= (i != j)
                                  //for evenNumber of nodes= (i->prev != j) 
        swap(i->val, j->val) ;
        i= i->next ;
        j= j->prev ;
    }
}

int main(){
    Doubly_node *head = new Doubly_node(10) ;
    Doubly_node *a = new Doubly_node(20) ;
    Doubly_node *b = new Doubly_node(30) ;
    Doubly_node *c = new Doubly_node(40) ;
    Doubly_node *d = new Doubly_node(50) ;
    // Doubly_node *e = new Doubly_node(60) ;
    // Doubly_node *tail = e ;
    Doubly_node *tail = d ;
    head->next = a;
    a->next =b ;
    b->next = c;
    c->next =d ;
    //d->next= e ;

    //e->prev= d;
    d->prev= c;
    c->prev = b ;
    b->prev = a ;
    a->prev= head ;

    //reverse_DLL(head,tail) ;
    reverse_DLL2(head, tail) ; //2nd way
    print_DLL(head);
    //normal_Reverse_DLL(tail) ;

    return 0 ;
}
