// two singly linked list are same? or not?

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


void check_Same(Singly_node *head1, Singly_node *head2 ){
    Singly_node *tmp1 = head1 ;
    Singly_node *tmp2 = head2 ;

    int flag =1 ;
    while(tmp1 != NULL && tmp2 != NULL){
        if(tmp1->val != tmp2->val ){
            flag = 0;
            break ;
        }
        tmp1= tmp1->next ;
        tmp2 = tmp2->next ;
        if(tmp1 == NULL && tmp2 != NULL && flag==1){
            flag = 0;  break ;
        }
        else if(tmp1 != NULL && tmp2 == NULL && flag==1){
            flag = 0;  break ;
        }
    }
    
    if(flag==1){
        cout<< "YES" << endl ;
    }
    else{
        cout<< "NO" << endl ;
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
    Singly_node *head1 = NULL ; 
    Singly_node *tail1 = NULL ;
    int val ;
    while(true){
        cin>> val ;
        if(val==-1) break;
        insert_at_tail(head1, tail1,val); 
    }
    
    Singly_node *head2 = NULL ; 
    Singly_node *tail2 = NULL ;
    while(true){
        cin>> val ;
        if(val==-1) break;
        insert_at_tail(head2, tail2,val); 
    }
    
    check_Same(head1,head2) ;

    return 0;

}