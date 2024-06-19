// find 'V'
// find( v.begin() , v.end() , V )  ->return Iterator

#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v= {1,2,2, 10, 5,4, 6,4, 3 ,10} ;
    vector<int>:: iterator it ;
    it = find(v.begin() , v.end() ,10 ) ;

    cout << *it << endl ;  //10
    // Dereferencing Iterator: When you dereference the iterator with *it, 
    // you get the value that the iterator is pointing to, which is 10.
    // it's indicate that value is founded

    vector<int>:: iterator it2 ;
    it2 = find(v.begin() , v.end() , 400 ) ;

    cout << *it2 << endl ; // garbage
//value 400 has no existence in the vector v, so it returns v.end(). 
// Dereferencing v.end() with *it2 is invalid, leading to undefined behavior.
//v.end() does not point to a valid element in the vector. 
// This can result in accessing invalid memory and can produce garbage values 
// or even crash the program.

    if(it2 != v.end() ) cout << *it2 << endl ;  //not execute
    else cout <<" Not Found" << endl ;

    return 0 ;
    
}