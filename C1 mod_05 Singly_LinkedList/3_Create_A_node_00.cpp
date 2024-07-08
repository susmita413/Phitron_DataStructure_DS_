#include<bits/stdc++.h>
using namespace std ;

class Node{
    public:
        int value;
        Node* next ;
};

int main(){
    Node a, b;      // Object
    a.value = 10;   // set value
    b.value = 20 ; 

    a.next = &b ;   // Link them
    cout << a.value << endl ;   // print their value one by one
    cout<< b.value << endl ;

    cout<< (*a.next).value << endl ; // print their value using 1st node
    // "a.next " holo  "b" group er pointer , "a.next" ke DEREFERENCE
    // korle, "b" er value pabo
    cout<< a.next->value << endl ;   // shortCut syntex
    

}