#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=70000 ;
    for(int i=n; i>=1; i= i/4){       
        cout <<"hello " <<i << endl ; 
    }                    // [ n/ 4^k ] kore kore komtese-> 'i' er value
                         // n/ 4^k =1 
    
    // complexity = O(log₄ n) -> O(log n)

    return 0 ;
}

