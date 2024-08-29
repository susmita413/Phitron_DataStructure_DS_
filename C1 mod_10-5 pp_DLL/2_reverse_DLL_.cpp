//Take a doubly linked list as input and reverse it. 
//After that print the linked list.

#include<bits/stdc++.h>
using namespace std;

class DLL_node{
    public:
        int val;
        DLL_node *next ;
        DLL_node *prev;
        DLL_node(int val){
            this->val = val ;
            this->next = NULL ;
            this->prev = NULL ;
        }
};
void print_DLL(DLL_node *head){
    DLL_node *tmp =head;
    while(tmp != NULL){
        cout<<tmp->val <<" " ;
        tmp= tmp->next ;
    }
    cout<<endl ;
}
void print_DLL_reverse(DLL_node *tail){
    DLL_node *tmp =tail;
    while(tmp != NULL){
        cout<<tmp->val <<" " ;
        tmp= tmp->prev ;
    }
    cout<<endl ;
}

void reverse_list(DLL_node *&head, DLL_node *&tail){
    DLL_node *i= head ;
    DLL_node *j = tail;
    while( i != j && i->prev != j){
        swap(i->val , j->val) ;
        i= i->next ;
        j= j->prev ;
    }
}


void insert_tail(DLL_node *&head, DLL_node *&tail, int val){
    DLL_node *newNode = new DLL_node(val);
    if(tail==NULL){
        head= newNode;
        tail= newNode ;
        return;
    }
    tail->next= newNode;
    newNode->prev = tail;
    tail= newNode ;
}


int main(){
    DLL_node *head=NULL ;
    DLL_node *tail=NULL ;
    cout<<"list input: " <<endl;
    int val;
    while(true){
        cin>> val;
        if(val == -1) break ;
        insert_tail(head,tail,val);
    }
    cout<<endl ;
    reverse_list(head,tail);
    print_DLL(head);
    print_DLL_reverse(tail) ;
    


    return 0 ;
}