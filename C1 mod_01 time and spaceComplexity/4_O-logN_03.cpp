#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=6000 ;
    for(int i=1; i<=n; i*=5){       
        cout <<"hello " <<i << endl ; 
    }                    // [ 5^k ] kore kore bartese-> 'i' er value
                         //5⁰,5¹,5², 5³, 5⁴,....5^k
                         // 5^k = n
    
    // complexity = O(log₅ n) -> O(log n)

    return 0 ;
}

