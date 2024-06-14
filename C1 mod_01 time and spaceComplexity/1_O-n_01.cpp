#include<bits/stdc++.h>
using namespace std;

int main(){
    // input value , n=5 
     int x= 10 ;
     
    //int ar[5] = {2,4,20,4 ,10 } ;  // worst case
    int ar[5] = {10,4,20,4 ,2 } ;  // best case
   

    for(int i=0 ; i<5 ; i++){
        cout<< "I= " << i << endl ; 

        if(ar[i]== x){
            cout<< "GOT " <<x << endl ;
            break ;
        }
    }
                             // complexity = O(5) -> O(n)

    return 0 ;
}