#include<bits/stdc++.h>
using namespace std;

int main(){
    //1
    list<int> myList= {1,2,3,4,5,6};
    list<int> newList;
    newList = myList ;
    for(auto it= newList.begin(); it!= newList.end(); it++){
        cout<< *it <<" " ;   
    }
    cout<< endl<<" " ;

    //2
    list <int> myList2= {10,20,30,40,50};
    list<int> newList2;
    newList2.assign(myList2.begin(), myList2.end());

    for(auto it= newList2.begin(); it!= newList2.end(); it++){
        cout<< *it <<" " ;   
    }
    cout<< endl<<" " ;


    

    return 0 ;
}