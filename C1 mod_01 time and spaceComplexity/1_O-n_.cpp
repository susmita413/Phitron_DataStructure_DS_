#include<bits/stdc++.h>
using namespace std;

int main(){
    int n= 50 ;
    for(int i=1; i<=n ; i++){  // initialize step=1,
                               // for n=50, condition checks 50 times
                               // increase 50 times 
        cout<< " Hello " << i << endl ;  // print 50 times
    }
        // O(1+50+50+50) = O(151) hoar kotha
        // but we took O(50) , bakituk skip krbo
                        
                         // eksathe sob step run hosche , 
                         //jate 'n' time nische
                        // total time complexity = O(n)
    return 0 ;
}