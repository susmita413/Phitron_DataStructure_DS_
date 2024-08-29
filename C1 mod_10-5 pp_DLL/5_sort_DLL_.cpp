//Take doubly linked list and sort it in ascending order. 
// Then print the list.


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

void sortDLL(DLL_node *head, DLL_node *tail){
    DLL_node *i, *j ;
    for( i= head; i->next != NULL; i= i->next){
        for(j= i->next; j != NULL ; j=j->next){
            if(i->val > j->val){
                swap( i->val, j->val);
            }
        }
    }
}


int main(){
    DLL_node *head=NULL ;
    DLL_node *tail=NULL ;
    int val ;
    
    while(true){
        cin>> val ;
        if(val== -1) break;
        insert_tail(head,tail,val) ;
    }
    sortDLL(head,tail) ;
    print_DLL(head);
    print_DLL_reverse(tail);


    return 0 ;
}