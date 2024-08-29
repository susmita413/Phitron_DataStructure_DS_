//Take two doubly linked lists as input and check if they are 
//the same or not.

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

void sameOr_Not(DLL_node *head1, DLL_node *head2){
    // 1 empty list, both empty list : handeled
    if(sizeDLL(head1) != sizeDLL(head2)) {  
        cout<< "Not same %" <<endl;  return;
    }
    DLL_node *i= head1;
    DLL_node *j= head2;
    bool flag = true;
    while(i != NULL ){
        if(i->val != j->val){
            flag = false;
            break;
        }
        i= i->next;
        j= j->next ;
    }
    cout<< ((flag==true) ? "Same" : "Not same" ) << endl;
}

int main(){
    DLL_node *head1=NULL ;
    DLL_node *tail1=NULL ;
    cout<<"1st list input: " <<endl;
    int val;
    while(val != -1){
        cin>> val;
        if(val != -1){
            insert_tail(head1,tail1,val);
        }
    }

    DLL_node *head2=NULL ;
    DLL_node *tail2=NULL ;
    cout<<endl<<"2nd list input: " <<endl;
    val= 0 ;
    while(val != -1){
        cin>> val;
        if(val != -1){
            insert_tail(head2,tail2,val);
        }
    }
    
    sameOr_Not(head1,head2) ;



    return 0 ;
}