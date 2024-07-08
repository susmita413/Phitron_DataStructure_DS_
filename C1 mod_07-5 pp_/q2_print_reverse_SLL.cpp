//Take a singly linked list as input and print the reverse of the linked list

#include<bits/stdc++.h>
using namespace std;

class Singly_node{
    public:
        int val; 
        Singly_node *next ;
        Singly_node(int val){
            this->val = val ;
            this->next =NULL; 
        }
};

void insert_at_tail(Singly_node *&head, Singly_node *&tail, int val){
    Singly_node *newNode = new Singly_node(val) ;
    if(head == NULL){
        head = newNode;
        tail = newNode;
    }
    tail->next = newNode ;
    tail = newNode ;
}


void print_reverse(Singly_node *n){
    if(n== NULL){
        return ;
    }
    print_reverse(n->next) ;
    cout<< n->val << " " ;
}

int main(){
    Singly_node *head = NULL ;
    Singly_node *tail = NULL ;

    int val ;
    while(true){
        cin>> val ;
        if(val == -1) break ;
        insert_at_tail(head, tail, val);
    }

    print_reverse(head) ;
    
}