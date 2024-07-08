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
        tail = newNode ;
        return ;
    }
    tail->next = newNode ;
    tail = newNode;
}


int sizeLL(Singly_node *head){
    int count=0 ;
    Singly_node *tmp =head ;
    while( tmp != NULL){
        count++ ;
        tmp= tmp->next ;
    }
    return count ;
}

void print_Maximum(Singly_node *head){
    int max_val = INT_MIN ;
    for(Singly_node *i=head; i != NULL ; i=i->next){
        if(max_val < i->val){
             max_val = i->val ;
        }
    }
    cout<<"Maximum: " << max_val << endl ;
}

void print_LinkedList(Singly_node *head){
    Singly_node *tmp = head ;
    while(tmp != NULL){
        cout<< tmp->val << " " ;
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
        if(val == -1) break ;
        insert_at_tail(head, tail, val);
    }
    print_LinkedList(head) ;
    cout<< endl ;
    print_Maximum(head) ;
    
}