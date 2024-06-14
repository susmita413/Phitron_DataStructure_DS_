#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=600 ;
    for(int i=1; i<=n; i*=2){       // 1,2,4,8,16,32,64,128...
        cout <<"hello " <<i << endl ; 
    }                    // [ (2^k) ] kore kore bartese-> 'i' er value
                         // 2^k = n

    for(int i=n; i>=1; i= i/2){       // for n=100 -> 100,50,25,12,6,3,1,0.5
        cout <<" susmi " <<i << endl ; 
    }                   // [ n/(2^k) ] kore kore komtese-> 'i' er value
                        // n/(2^k) =1

// complexity = O(log₂ n + log₂ n) -> O(2 log₂ n)
//            -> O(log n)
    return 0 ;
}