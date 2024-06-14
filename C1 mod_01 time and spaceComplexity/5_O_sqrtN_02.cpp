// find divisor

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=36 ;     
    for(int i=1; i*i<= n; i++){  // here we don't need to find 36 times
        if (n%i ==0){
           cout << i << " " ;
           
           if (n/i != i){
               cout<< n/i << endl ; 
           }
        }
    }
        
// complexity = O(√n) 

    return 0 ;
}