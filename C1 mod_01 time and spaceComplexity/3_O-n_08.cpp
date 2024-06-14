#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=32 ;
    
    for(int i=0; i<=n ; i+=8){   // 0,8,16,24,32,40     //--- O(n/8)
            cout <<"HELLO " <<i << endl ;
    }
// The number of iterations can be calculated as ⌈𝑛/8⌉
//For n = 32, it runs 5 times (0, 8, 16, 24, 32).         

    for(int i=n; i>=1 ; i-=6){   // 32,26,20,14,8,2,-4  //--- O(n/6)
        cout<<" SUSMI " <<i << endl ;    
    }

// The number of iterations can be calculated as ⌈𝑛/6⌉
// For n = 32, it runs 6 times (32, 26, 20, 14, 8, 2).

// First Loop: 𝑂(n/8) which simplifies to O(n).
// Second Loop: O(n/6) which also simplifies to O(n)  

// complexity = O((n/8) + (n/6)) 
//            -> O(n+n) -> O(n)


    return 0 ;
}