#include<bits/stdc++.h>
using namespace std ;

void fun(int * &p){  // taking reference
    p= NULL ;        // 'ptr' ponter null hoye jabe

    cout<<"IN fun(): " << endl ;   
    cout<<" &p= "  << &p << endl; 
    cout<<"value of 'p' = "  << p << endl; 
    // 'p' null kore diyar karone NULL/ 0 dekhabe
}

int main(){
    int val =10 ;
    int *ptr = &val ;
    fun(ptr) ;      
    
    cout<<endl << "IN main() : " << endl ;

    cout<< "val= " << val << endl ;
    cout<< "Address of val= " << &val << endl ;
    cout<< "value of 'ptr' = " << ptr << endl ;
    // 'p' null kore diyar karone 'ptr' NULL hoyese
    // so, ptr= NULL/ 0 dekhabe
    
    cout<< "&ptr= "  << &ptr << endl;
    // &ptr = &p 

}