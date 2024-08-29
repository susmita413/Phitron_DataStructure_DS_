//milist.reverse()

#include<bits/stdc++.h>
using namespace std;

int main(){
    list<int> mylist = {20,40,40, 10,50,40, 60,30,60} ;

    mylist.reverse(); //just reverse the list
    for(int x: mylist){
        cout<< x << " " ;
    }
    cout<< endl ;

    return 0 ;
}