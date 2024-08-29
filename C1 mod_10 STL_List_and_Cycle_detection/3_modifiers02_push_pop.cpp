#include<bits/stdc++.h>
using namespace std;

int main(){
    //push
    list<int> myList= {1,2,3,4};
    myList.push_back(100); // insert tail
    myList.push_back(200);
    for(auto it= myList.begin(); it!= myList.end(); it++){
        cout<< *it <<" " ;   
    }
    cout<< endl<<endl ;

    myList.push_front(10); //insert head
    myList.push_front(20);
    for(auto it= myList.begin(); it!= myList.end(); it++){
        cout<< *it <<" " ;   
    }
    cout<< endl<<endl ;
   
    //pop
    myList.pop_back(); // delete tail
    myList.pop_back();
    for(auto it= myList.begin(); it!= myList.end(); it++){
        cout<< *it <<" " ;   
    }
    cout<< endl<<endl ;

    myList.pop_front();// delete head
    myList.pop_front();
    for(auto it= myList.begin(); it!= myList.end(); it++){
        cout<< *it <<" " ;   
    }
    cout<< endl<<endl ;

    

    return 0 ;
}