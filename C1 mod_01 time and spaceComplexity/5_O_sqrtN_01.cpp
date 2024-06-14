// find divisor

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=36 ;     
    for(int i=1; i<= sqrt(n); i++){  // here we don't need to find 36 times
        if (n%i ==0){
           cout << i << " " << n/i << endl  ;
           
        }
    }
 // complexity = O(√n) 
 
    return 0 ;
}