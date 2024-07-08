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

void printLL_with_recursion(Singly_node *n){
    if(n== NULL){
        return ;
    }
    cout<< n->val << " " ;
    printLL_with_recursion(n->next) ;
}

void printLL_Reverse(Singly_node *n){
    if(n== NULL){
        return ;
    }
    printLL_Reverse(n->next) ;
    cout<< n->val <<" " ;
}

int main(){
    Singly_node *head = new Singly_node(10);
    Singly_node *a = new Singly_node(20);
    Singly_node *b = new Singly_node(30);
    Singly_node *c = new Singly_node(40);
    Singly_node *d = new Singly_node(50);
    Singly_node *tail = d;
    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;

    cout<< endl ;
    printLL_with_recursion(head) ;
    cout<< endl ;
    printLL_Reverse(head) ;


    return 0;


}
