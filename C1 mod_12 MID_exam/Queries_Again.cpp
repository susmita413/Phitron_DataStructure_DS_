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
    cout<<"L -> " ;
    Doubly_node *tmp =head ;
    while(tmp != NULL){
        cout<< tmp->val << " " ;
        tmp = tmp->next ;
    }
    cout<< endl ;
}

void print_Reverse_DLL(Doubly_node *tail){
    cout<<"R -> " ;
    Doubly_node *tmp = tail ;
    while(tmp != NULL){
        cout<< tmp->val << " " ;
        tmp = tmp->prev ;
    }
    cout<< endl ;
}

int sizeDLL(Doubly_node *head){
    Doubly_node *tmp =head ;
    int cnt=0 ;
    while(tmp!= NULL){
        cnt++ ;
        tmp= tmp->next ;
    }
    return cnt ;
}

void insert_head(Doubly_node *&head,Doubly_node *&tail,int val){
    Doubly_node *newNode = new Doubly_node(val) ;
    if(head== NULL){
        head = newNode;
        tail= newNode ;
        return ;
    }
    newNode->next = head ;
    head->prev = newNode;
    head= newNode ;
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

void insert_anyPosition(Doubly_node *&head, Doubly_node *&tail, int pos, int val){

    Doubly_node *newNode = new Doubly_node(val) ;
    Doubly_node *tmp = head ;
    for(int i=1; i<=pos-1; i++){
        tmp= tmp->next ;
    }
    newNode->next = tmp->next;
    tmp->next = newNode ;
    newNode->prev = tmp ;
    newNode->next->prev = newNode ;
}

int main(){
    Doubly_node *head= NULL ;
    Doubly_node *tail = NULL ;
    int q, x,v ;
    cin>> q ;
    for(int i=1; i<=q; i++){
        cin>> x >> v ;
        if(x==0){
            insert_head(head, tail,v) ; 
        }
        else if(x == sizeDLL(head)){
            insert_tail(head,tail, v) ;
        }
        else if(x > sizeDLL(head)){
            cout<<"Invalid"<<endl ; 
            continue ;
        }
        else{
            insert_anyPosition(head, tail, x, v);
        }
        print_DLL(head);
        print_Reverse_DLL(tail) ;
    }

    


}
