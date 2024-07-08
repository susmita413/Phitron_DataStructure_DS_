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
    cout << a.value << endl ;   // print their value 
    cout<< a.next->value << endl ;  
    
    cout<<"  Address print " << endl ;
    cout << &a << endl ;
    cout << &a.value << endl ;
    
    cout << &(*a.next).value << endl ;
    cout << &b << endl ;
    cout << &b.value << endl ;

}

/*
In this output:
=> The address of a and &a.value might look the same 
if value is the first member of Node.
=> The address of b and &b.value might look the same if 
value is the first member of Node.

=>=> The key takeaway is that although they might look the same in specific
 cases, conceptually, the address of an object and the address of its member 
 are not the same. 
 The object's address is the base address of the entire object, 
 and the member's address is the specific location of that member within 
 the object.
 
*/