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
    Doubly_node *tmp =head ;
    while(tmp != NULL){
        cout<< tmp->val << " " ;
        tmp = tmp->next ;
    }
}
void print_Reverse_DLL(Doubly_node *tail){
    Doubly_node *tmp = tail ;
    while(tmp != NULL){
        cout<< tmp->val << " " ;
        tmp = tmp->prev ;
    }
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

void check_palindrome(Doubly_node *head, Doubly_node *tail){
    if(head== tail){  // single node case
        cout<<"YES" <<endl ;
        return ;
    }
    Doubly_node *i= head ;
    Doubly_node *j = tail;
    bool flag = true;
    while(i != j && i->next != j){   
        if (i->val != j->val){
            flag =false ;
            break ;
        }
        i= i->next ;
        j= j->prev ;
    }
    if (i->val != j->val){
        flag =false ;
    }

    if(flag==true) cout<<"YES";
    else  cout<< "NO" ;
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

    check_palindrome(head,tail);

}