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

void print_Middle(Singly_node *head){
    int mid= (sizeLL(head)) /2 ;
    Singly_node *tmp = head ;

    for(int i=1; i<= mid-1 ; i++){
        tmp = tmp->next ;  //i index = 'tmp' point kora index = mid-1 index
    }
    if((sizeLL(head)) %2 == 1){ // odd
        cout<< tmp->next->val << endl;
    }
    else {  // even
        cout<<tmp->val << " " << tmp->next->val << endl; 
    }
}


void print_LinkedList(Singly_node *head){
    Singly_node *tmp = head ;
    while(tmp != NULL){
        cout<< tmp->val << " " ;
        tmp= tmp->next ;
    }
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
    
    cout<< endl ;
    print_LinkedList(head) ;
    cout<< endl<<" middle value : " <<endl ;
    print_Middle(head) ;
    
}