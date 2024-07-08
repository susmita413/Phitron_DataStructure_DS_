#include<bits/stdc++.h>
using namespace std ;

class Singly_node{
    public:
        int val ;
        Singly_node* next ;
        Singly_node(int val){
            this->val = val ;
            this->next = NULL ; 
    }
};

int main(){
    Singly_node *head = new Singly_node(10);
    Singly_node *a = new Singly_node(20)  ;
    Singly_node *b = new Singly_node(30) ;

    head->next = a ;
    a->next = b ;
    
    cout<< (*head).val <<" Or, "<< head->val << endl ;
    cout<< (*(*head).next).val <<" Or, "<< head->next->val << endl ;
    cout<< (*(*(*head).next).next).val <<" Or, "<< head->next->next->val << endl ;


}