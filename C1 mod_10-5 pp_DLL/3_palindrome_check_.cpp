//Take a doubly linked list as input and check if it forms any palindrome or not.

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

void check_palindrome(DLL_node *head, DLL_node *tail){
    DLL_node *i= head ;
    DLL_node *j = tail;
    if(head== tail){  // single node case
        cout<<"Palindrome **" <<endl ;
        return ;
    }
    bool flag = true;
    while(i != j && i->prev != j){   
    // odd: i != j   // even: i->prev != j
        if (i->val != j->val){
            flag =false ;
            break ;
        }
        i= i->next ;
        j= j->prev ;
    }
    cout<< ((flag==true) ? "Palindrome" : "Not palindrome" ) << endl;
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
    
    //print_DLL(head);
    //print_DLL_reverse(tail) ;
    check_palindrome(head,tail) ;


    return 0 ;
}