#include<bits/stdc++.h>
using namespace std;

int main(){
    list<int> mylist= {10,20,30, 60,70, 40, 90,20, 80, 100 };

    list<int> ::iterator it;
    it = find(mylist.begin(), mylist.end(), 6000) ;
    cout<< *it << endl;  // dereferencing the iterator
    // if the value is not found,This could cause a runtime error 
    //(e.g., segmentation fault) or print some garbage value, depending on your system and compiler.
    
    //1
    auto it2= find(mylist.begin(), mylist.end(), 80) ;
    
    if(it2 == mylist.end())
        cout<< " Not found" << endl ;
    else 
        cout<< *it2 <<" is found" << endl ;


    //2
    it2 = find(next(mylist.begin(),2) , next(mylist.begin(),6), 20) ;
    if(it2 == next(mylist.begin(),6) )
        cout<< " Not found in 2-5 index" << endl ;
    else 
        cout<< *it2 <<" is found" << endl ;
        

    return 0 ;
}