#include<bits/stdc++.h>
using namespace std;

class Singly_node{
    public:
        int val ;
        Singly_node *next ;
        Singly_node (int val){
            this->val = val ;
            this->next = NULL ;
        }
};

void insert_at_tail(Singly_node *&head, Singly_node *&tail, int val){
    Singly_node *newNode = new Singly_node(val) ;
    if(head == NULL){
        head= newNode ;
        tail = newNode ;
        return ;
    }
    tail->next = newNode ;
    tail = newNode ;
}



void delete_Duplicate(Singly_node *&head){
    Singly_node *i= head;
    while( i !=NULL && i->next != NULL){
        Singly_node *j= i;
        while(j != NULL && j->next != NULL){
            if(i->val == j->next->val){
                Singly_node *del_node = j->next;
                j->next = j->next->next;
                delete del_node ;
            }
            else{
                j= j->next ;
            }
        } 
        i=i->next; 
    }
}


void printLL(Singly_node *head){
    Singly_node *tmp =head ;
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
        insert_at_tail(head, tail,val); 
    }
    
    delete_Duplicate(head) ;
    printLL(head) ; 
    


    return 0;

}