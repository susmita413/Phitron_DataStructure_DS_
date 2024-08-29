// mylist.remove(), mylist.sort()

#include<bits/stdc++.h>
using namespace std;

int main(){
    list<int> mylist = {20,10,30, 20,40,40, 20,10,20, 20,50,40, 60,30,60} ;
    //1
    mylist.remove(20);
    
    //2
    mylist.sort(); //sort ascending
    mylist.sort(greater<int>()) ; // sort descending

    for(int x: mylist){
        cout<< x << " " ;
    }
    cout<< endl ;

    return 0 ;
}