#include<bits/stdc++.h>
using namespace std;

int main(){
    int n= 7 ;
    int k=1 ; // for count step
    
    for(int i=0; i<=n-1 ; i++){       //------ O(n)                 
        for(int j=i+1; j<n ; j++){   
            cout << "Hello " <<k << endl ;
            k++ ;
        } 
    }
// step count from 'j' = 6+5+4+3+2+1+0 
//                     = (n-1)+ ... + 4+3+2+1
// [(n-1)(n-1+1)]/2  => [(n-1)n ]/2  => (n²/2) - (n/2) 

// complexity = O(n(n+1)/2)  [according to mathematical proof]
//            -> O(n²-n) -> O(n²)

    return 0 ;
}