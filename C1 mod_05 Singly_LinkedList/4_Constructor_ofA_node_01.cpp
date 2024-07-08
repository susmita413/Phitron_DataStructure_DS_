#include<bits/stdc++.h>
using namespace std ;

class Singly_node{
    public:
        int val;
        Singly_node *next ;

        Singly_node(int val){
            (*this).val = val ;
            (*this).next = NULL ;
            // this->val = val ;
            // this->next = NULL ;
        }
};

int main(){
    Singly_node a(10) ;
    Singly_node b(20) ;
    Singly_node c(30) ;
    Singly_node d(40) ;

    a.next = &b ;
    b.next = &c ;
    c.next = &d ;

    cout<< a.val << endl ;   
    cout<< a.next->val << endl ;   // b.val
    cout<< a.next->next->val << endl ;    //c.val
    cout<< (*(*a.next).next).val <<endl ; //c.val

    cout<< a.next->next->next->val << endl ;    // d.val
    cout<< (*(*(*a.next).next).next).val  <<endl ; //d.val

 
}