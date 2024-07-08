#include<bits/stdc++.h>
using namespace std ;

void fun(int *p){  // not taking reference
    // *p = NULL ; // null is pointer , not an integer
    *p = 303 ;

    cout<<"IN fun(): " << endl ; 
    cout<<" &p= "  << &p << endl; 
    cout<<" value of 'p' = "  << p << endl;
}

int main(){
    int val =10 ;
    int *ptr = &val ;
    //fun(ptr) ;
    fun(&val) ;  // 

    cout<<endl << "IN main() : " << endl ;
    cout<< val << endl ; //303
    cout<< *ptr << endl ; // 303
    cout<< " &ptr= "  << &ptr << endl; 
    // &ptr not equal &p

    cout<<"value of 'ptr'= "  << ptr << endl;
    cout<<" address of 'val'= "<< &val << endl;

}