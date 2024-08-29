//You have a doubly linked list which is empty initially. take a value Q which refers to queries.
//For each query you will be given X(index) and V(value). 
// insert, print in both left to right and right to left.
//If the index is invalid then print “Invalid”.

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

int sizeDLL(DLL_node *head){
    DLL_node *tmp =head;
    int cnt=0 ;
    while(tmp != NULL){
        cnt++ ;
        tmp= tmp->next ;
    }
    return cnt;
}
void insert_head(DLL_node *&head, DLL_node *&tail, int val){
    DLL_node *newNode = new DLL_node(val);
    if(head==NULL){
        head = newNode;
        tail= newNode;
        return;
    }
    newNode->next= head;
    head->prev= newNode;
    head= newNode;
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

void insert_anyPosition(DLL_node *&head, DLL_node *&tail,int pos, int val){
    if(pos==0){
        insert_head(head,tail,val) ;
        return;
    }
    if(pos== sizeDLL(head)){
        insert_tail(head,tail,val);
        return;
    }
    DLL_node *newNode = new DLL_node(val);
    DLL_node *tmp =head ;
    for(int i=1; i<= pos-1; i++){
        tmp= tmp->next ;
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
    newNode->prev= tmp;
    newNode->next->prev = newNode ;
}

int main(){
    DLL_node *head=NULL ;
    DLL_node *tail=NULL ;
    int qr , pos, val ;
    cin>> qr ; // enter query

    for(int i=1; i<=qr ; i++){
        cin>> pos>> val ;

        if(pos> sizeDLL(head)){
            cout<<"invalid" << endl<< endl ;
            continue ;
        }
        insert_anyPosition(head,tail,pos,val);
        print_DLL(head);
        print_DLL_reverse(tail);
        cout<< endl ;
    }
    
    return 0 ;
}