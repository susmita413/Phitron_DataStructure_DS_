#include<bits/stdc++.h>
using namespace std;

int main(){
    int m=1000; 
    int n=m ;
    cout << n << endl ;

    while(n>0){
        int digit = n%10 ;
        n= n/10 ;           // [ n/(10^k) ] kore kore komtese-> 'n' er value
        cout << n << endl ;
    }
                       // complexity = O(k) -> O(log₁₀ n) [base 10]
                       //            -> O(log n)
    return 0 ;
}