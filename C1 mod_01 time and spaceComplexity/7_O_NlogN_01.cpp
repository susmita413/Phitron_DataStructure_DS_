// digit extract from 1 to n

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n= 15 ;
    for(int i=1; i<= n; i++){    //--- O(n log(n) )
        int x= i ;               //--- O(n)
        while(x>0){             //--- O(log n)
            int digit = x%10 ;
            cout<< digit <<" " ;
            x /= 10 ;  // x= x/10
        }
        cout << endl ;
    }
    
    // complexity = O(n* log(n))

    return 0 ;
}