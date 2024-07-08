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
        cout<<" Inserted in HEAD" << endl ;
        return ;
    }
    
    Singly_node *tmp = head ;
    while(tmp->next != NULL){
        tmp = tmp->next ;
    }
    tmp->next = newNode ;
    cout<<" Inserted at tail" <<endl ;
}

void count_Size_(Singly_node *head){
    int count =0 ;
    Singly_node *tmp =head ;

    while(tmp != NULL){
        tmp= tmp->next ;
        count++ ;
    }
    cout <<" size of Linked List is = " << count << endl ;
}

void print_LinkedList(Singly_node *head){
    if(head== NULL){
        cout<< "List is empty" << endl ; return ;
    }
    cout<<" your linked list= " ;
    Singly_node *tmp = head; 
    while(tmp != NULL){
        cout << tmp->val << " " ;
        tmp= tmp->next ;
    }
    cout<< endl ;
}

int main(){
    int val ;
    Singly_node *head = NULL ;
    
    print_LinkedList(head) ;
    cout<<"enter value one by one" <<endl ;

    while(true){
        cin>> val ;
        if(val==-1){
            break ;
        }
        insert_at_tail(head,val) ;
    }

    print_LinkedList(head) ;
    count_Size_(head) ;
 
}