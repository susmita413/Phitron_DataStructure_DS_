//milist.unique()
// 4_operation_unique_.cpp

#include<bits/stdc++.h>
using namespace std;

int main(){
    list<int> mylist = {20,10,30, 20,40,40, 20,10,20, 20,50,40, 60,30,60} ;
    
    //mylist.sort();              //sort ascending
    mylist.sort(greater<int>()) ; // sort descending
    mylist.unique();      // duplicate delete with the help of mylist.sort()

    for(int x: mylist){
        cout<< x << " " ;
    }
    cout<< endl ;

    return 0 ;
}