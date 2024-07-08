// Take a singly linked list as input and check if the linked list 
// is sorted in ascending order

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
 

void printLL(Singly_node *head){
    Singly_node *tmp =head ;
    while(tmp != NULL){
        cout << tmp->val << " " ;
        tmp= tmp->next ;
    }
    cout<< endl ;
}


void check_sort_Ascending(Singly_node *head){
    Singly_node *tmp =head ;
    int flag =1 ;
    while(true){
        if(tmp->next == NULL){  //last value check kora proyojon na
            break ;
        }
        if(tmp->val > tmp->next->val){
            flag =0 ;
            break ;
        }
        tmp= tmp->next ;    
    }
    if(flag==0) cout<<" No" << endl ;
    else cout<<" Yes " << endl ;
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
    cout<< endl<<" List is ascending sorted ?"<< endl ;
    check_sort_Ascending(head) ;

    return 0;

}