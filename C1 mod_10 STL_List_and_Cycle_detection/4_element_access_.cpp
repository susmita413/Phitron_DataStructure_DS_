// back(), front(), next()

#include<bits/stdc++.h>
using namespace std;

int main(){
    list<int> mylist= {10,20,30, 60,70,40, 90,20,80};
    cout <<mylist.back() << endl ; // show tail
    cout<< mylist.front() << endl ; // show head

    auto it = next(mylist.begin(), 4) ;
    cout<< *it << endl ;  // show i'th Index value (0 based index)

    cout << *next(mylist.begin(),2) <<endl ;

    return 0 ;
}
/*
the standard C++ std::list is not circular. It is a doubly linked 
list where the last element points to nullptr (end), 
and the first element points to nullptr (before the beginning).
//
auto it = next(mylist.begin(), 12) ;
the output is showing that iterator is cycling through the list
elements. However, this is not expected behavior and doesn't 
indicate that the list is actually circular.

*/