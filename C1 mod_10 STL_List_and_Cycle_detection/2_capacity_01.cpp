// size, max_size, clear, empty, resize

#include<bits/stdc++.h>
using namespace std;

int main(){
    //1
    list<int> myList= {1,2,3,4,5,6,7} ;
    cout<< myList.size() << endl ;

    //2
    cout<< myList.max_size() << endl ;
    for(auto it= myList.begin(); it!= myList.end(); it++){
        cout<< *it <<" " ;   
    }
    cout<< endl<<" " ;

    //3
    myList.clear();  cout<<" Cleared\n " ;

    //4
    //(myList.empty()== true) ? cout<<"Empty"<<endl : cout<< "Not empty"<<endl ;
    cout<< ((myList.empty()== true) ? "list empty" : "list Not empty") << endl ;


    //5
    list<int> myList2= {10,20,30,40,50,60,70} ;
    //myList2.resize(3) ; // baki part(4th-7th) kete dibe
    //myList2.resize(12) ;  // extra part (8th-12th) er element 0 hobe
    myList2.resize(12,5) ;  // extra part (8th-12th) er element 5 hobe

    for(auto it= myList2.begin(); it!= myList2.end(); it++){
        cout<< *it <<" " ;   
    }
    cout<< endl;



    return 0 ;
}