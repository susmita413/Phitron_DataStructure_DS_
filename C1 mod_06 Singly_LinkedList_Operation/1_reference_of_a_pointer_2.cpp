#include<bits/stdc++.h>
using namespace std ;

void fun(int * &p){  // taking reference
    *p = 303 ;       // dereference

    cout<<"IN fun(): " << endl ;   
    cout<<" &p= "  << &p << endl; 
    cout<<"value of 'p' = "  << p << endl;
}

int main(){
    int val =10 ;
    int *ptr = &val ;
    fun(ptr) ;      
    // fun(&val) ;  //reference nische,tai address diya jabena
    
    cout<<endl << "IN main() : " << endl ;

    cout<< "val= " << val << endl ;
    cout<< "Address of val= " << &val << endl ;
    cout<< "value of 'ptr' = " << ptr << endl ;
    cout<< "&ptr= "  << &ptr << endl;
    // &ptr = &p 

}