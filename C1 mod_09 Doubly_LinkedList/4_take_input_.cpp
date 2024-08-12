#include<bits/stdc++.h>
using namespace std;
class Doubly_node{
    public:
        int val;
        Doubly_node* next ;
        Doubly_node* prev ;
        Doubly_node (int val){
            this->val= val;
            this->next = NULL ;
            this->prev= NULL ;
        }
};

void print_DLL(Doubly_node *head){
    if(head==NULL){
        cout<<" Empty List\n" ; return ;
    }
    cout<< endl<<" print List: " ;
    Doubly_node *tmp =head ;
    while(tmp != NULL){
        cout<< tmp->val << " " ;
        tmp = tmp->next ;
    }
    cout<< endl ;
}
void print_Reverse_DLL(Doubly_node *tail){
    if(tail==NULL){
        cout<<" Empty List\n" ; return ;
    }
    cout<< endl<<" print reverse List: " ;
    Doubly_node *tmp = tail ;
    while(tmp != NULL){
        cout<< tmp->val << " " ;
        tmp = tmp->prev ;
    }
    cout<< endl ;
}


void insert_tail(Doubly_node *&head,Doubly_node *&tail, int val){
    Doubly_node *newNode = new Doubly_node(val) ;
    if(head== NULL){
        head = newNode;
        tail= newNode ;
        return ;
    }
    tail->next = newNode;
    newNode->prev = tail ;
    tail = newNode ;
}

int main(){
    Doubly_node *head = NULL ;
    Doubly_node *tail = NULL ;
    int val ;
    while(true){
        cin>> val ;
        if(val==-1) break ;
        insert_tail(head,tail,val) ;
    }

    print_DLL(head);
    print_Reverse_DLL(tail) ;

}