#include<bits/stdc++.h>
using namespace std;

class Singly_node{
    public:
        int val;
        Singly_node *next;
        Singly_node(int val){
            this->val = val ;
            this->next = NULL ;
        }
};

void print_List(Singly_node *head){
    Singly_node *tmp = head ;
    while(tmp != NULL){
        cout<< tmp->val <<" " ;
        tmp = tmp->next ;
    }
    cout<< endl ;
}

int main(){
    Singly_node *head = new Singly_node(10) ;
    Singly_node *a = new Singly_node(20);
    Singly_node *b = new Singly_node(30) ;
    Singly_node *c = new Singly_node(40);
    Singly_node *d = new Singly_node(50) ;

    head->next = a;
    a->next = b;
    b->next = c; 
    c->next = d ;

    print_List(head) ;


    return 0 ;
}