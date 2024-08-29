#include<bits/stdc++.h>
using namespace std;

int main(){
    //1
    list<int> myList ;
    cout<< myList.size() << endl ; //0

    //2
    list<int> myList2(12) ;
    cout<< myList2.size() <<endl ; //12
    list<int> :: iterator it ;
    for(it= myList2.begin(); it!= myList2.end(); it++){
        cout<< *it <<" " ;  // all element=0
    }
    cout<< endl ;

    //3
    list<int> myList3(10,7) ;
    cout<< myList3.size() << endl ;
    for(it= myList3.begin(); it!= myList3.end(); it++){
        cout<< *it <<" " ;  // all element=7
    }
    cout<< endl ;

    //4
    list<int> list2= {1,2,3,4,5,6};
    list<int> myList4(list2);
    for(it= myList4.begin(); it!= myList4.end(); it++){
        cout<< *it <<" " ;  // 1 2 3 4 5 6
    }
    cout<< endl ;

    //5
    int ar[6] = {2,4,6,8,10,12};
    list<int> myList5(ar,ar+6) ;
    for(it= myList5.begin(); it!= myList5.end(); it++){
        cout<< *it <<" " ;  // 2 4 6 8 10 12
    }
    cout<< endl ;

    //6
    vector<int> v = {1,3,5,7,9,11};
    list<int> myList6(v.begin(), v.end());
    for(it= myList6.begin(); it!= myList6.end(); it++){
        cout<< *it <<" " ;  // 1 3 5 7 9 11
    }
    cout<< endl ;
    cout<< myList6.front() << endl ;


    return 0 ;
}