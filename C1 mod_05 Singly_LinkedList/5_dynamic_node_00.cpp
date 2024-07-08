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
    Singly_node a(10) ;  // static
    Singly_node *b = new Singly_node(20) ; // dynamic node
    Singly_node *c = new Singly_node(30);
    Singly_node *d = new Singly_node(50) ;

    a.next = b ;  // Link static node 'a' to dynamic node 'b'

    b->next = c ; // Link dynamic node 'b' to dynamic node 'c'
    c->next = d ; // Link dynamic node 'c' to dynamic node 'd'

    cout<< a.val << endl ;
    cout<< (*a.next).val << endl ;     //b.val
    cout<< a.next->val <<endl <<endl  ;

    cout<< (*(*a.next).next).val << endl ; // c.val
    cout<< a.next->next->val << endl ;

    cout<< (*(*(*a.next).next).next).val  <<endl ; // d.val
    cout<< a.next->next->next->val << endl ;


}
