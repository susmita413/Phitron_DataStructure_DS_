// index / position = 0  1  2  3  4  ...
// value ..........= 10 20 30 40 50 ...

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

void insert_at_tail(Singly_node *&head, int v){
    Singly_node *newNode= new Singly_node(v) ;
    if(head == NULL){
        head = newNode;
        return ;
    }
    Singly_node *tmp = head ;
    while(tmp->next != NULL){
        tmp = tmp->next ;
    }
    tmp->next = newNode ;
}


void insert_head(Singly_node *&head, int v){
    Singly_node *newNode = new Singly_node(v) ;
    newNode->next = head;
    head = newNode ;
}

void delete_head(Singly_node *&head){
    if(head == NULL){
        return ;
    }
    Singly_node *deleteNode =head ;
    head= head->next ;
    delete deleteNode ;
}

void delete_from_position(Singly_node *&head, int pos){
    if(head==NULL){
        return ;
    }
    if(pos==0){
        delete_head(head);  return ;
    }
    Singly_node *tmp =head ;
    for(int i=1; i<=pos-1; i++){  
        tmp= tmp->next ;         
        if(tmp== NULL){          
            return ;
        }
    }
    if(tmp->next == NULL){      
        return ;
    }
    Singly_node *deleteNode = tmp->next ;
    tmp->next = tmp->next->next ;
    delete deleteNode ;
    
}


void print_LinkedList(Singly_node *head){
    Singly_node *tmp = head; 
    while(tmp != NULL){
        cout << tmp->val << " " ;
        tmp= tmp->next ;
    }
    cout<< endl ;
}


int main(){
    Singly_node *head = NULL ;
    int qu ; 
    cin>> qu ;

    for(int i=1; i<= qu; i++){
        int op, v;  
        cin>> op >> v ;

        if(op==0){
            insert_head(head, v) ;
        }
        else if(op==1){
            insert_at_tail(head, v) ;
        } 
        else if(op==2){
            delete_from_position(head,v) ;
        }
        
        print_LinkedList(head) ;
    }
    

    return 0 ;
}