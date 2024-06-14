#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=10 ;
    //cin >>n ;  // input value n.
    int a[n] ;

    for(int i=0; i<n ; i++){          //--- O(n)
        cin >> a[i] ;                 // 1 2 3 4 5 6 7 8 9 0
    }
    int sm= 0;

    for(int i=0; i<n ; i++){          //--- O(n)
        if(i%2 ==0 ){                 //--- O(1) * O(n)
            sm += a[i] ;
        }
    }
    cout << sm << endl ;

        // complexity = O(n+n) ->O(2n) ->O(n) 

    return 0 ;
}