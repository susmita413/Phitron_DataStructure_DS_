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
 

void insert_head(Singly_node *&head, int val){
    Singly_node *newNode = new Singly_node(val) ;
    newNode->next = head ;
    head= newNode ;
}


void insert_at_position (Singly_node *&head, int pos,int val){
    if(pos==0){
        insert_head(head, val);  
        return ;
    }
    Singly_node *newNode = new Singly_node(val) ;
    Singly_node *tmp = head ;
    for(int i=1; i<=pos-1; i++){
        tmp= tmp->next ;
        if(tmp== NULL){
            cout<<" Invalid Position" << endl ;
            return ;
        }
    }
    newNode->next = tmp->next ;
    tmp->next = newNode ;
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
        insert_at_tail(head, tail,val); //O(1)
    }
    
    printLL(head) ; 
    int t; cin>>t ;
    for(int i=1; i<=t; i++ ){
        int pos , val;
        cin>> pos>> val ;
        insert_at_position(head, pos, val) ;
        printLL(head) ;
    }

    return 0;

}