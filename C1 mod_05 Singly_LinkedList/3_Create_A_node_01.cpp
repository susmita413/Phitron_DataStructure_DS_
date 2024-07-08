#include<bits/stdc++.h>
using namespace std;

class Singly_node{
    public:
        int val;
        Singly_node* next ;
};

int main(){
    Singly_node a,b,c,d ;
    a.next = &b;   // age link korlam
    b.next = &c ;
    c.next = &d ;

    a.val =10 ;
    (*a.next).val =20 ;      // b.val =20
    (*(*a.next).next).val =30 ; // c.val = 30
    a.next->next->next->val= 40 ; // d.val = 40

    cout<< a.val << endl ;
    cout<< b.val << endl ;
    cout<< c.val << endl ;
    cout<< d.val << endl ;
    
}