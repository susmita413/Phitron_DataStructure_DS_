#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=15 ;
    //cin >>n ;  // input value n.
    int a[n] = {10,20,30,40,50,60,70,80,90,100,-50,-60,-70,-80,-90} ;

    int sm= 0;

    // for(int i=0; i<n/2 ; i++){   // 0 to 6  //--- O(n/2)
    //     sm += a[i] ;    
    // }
    // cout << sm << endl ;  //280
    //                             // complexity = O(n/2) ->O(n) 

    for(int i=0; i<=n/6 ; i++){   // 0 to 2  //--- O(n/6)
        sm += a[i] ;    
    }
    cout << sm << endl ;  //60
                                // complexity = O(n/6) 
                                //            ->O(n * 0.167) -> O(n)


    return 0 ;
}