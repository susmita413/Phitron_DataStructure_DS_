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
    Singly_node *head = new Singly_node(5);
    Singly_node *a = new Singly_node(7)  ;
    Singly_node *b = new Singly_node(1) ;
    Singly_node *c = new Singly_node(14)  ;
    Singly_node *d = new Singly_node(3) ;
    Singly_node *e = new Singly_node(11) ;


    head->next = a ;
    a->next = b ;
    b->next =c ;
    (*c).next = d ;
    (*d).next = e ;
    
    int sum = 0 ;
    Singly_node *temp = head ;
    while ( temp->next != NULL ){  // last node asle Loop break hobe
        sum += temp->val ;         // sum= 0+5+7+1+14 +3 =30
        temp = temp->next ;
    } 
    sum -= temp->val;             // sum = 30 -11 

    cout<< sum << endl ;          // 19

    return 0 ;
}
