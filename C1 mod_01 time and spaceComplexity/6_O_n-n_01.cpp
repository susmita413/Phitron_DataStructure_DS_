#include<bits/stdc++.h>
using namespace std;

int main(){
    int n= 5 ;
    int k=1 ; // for count step
    
    for(int i=1; i<=n ; i++){       //------ O(n)                 
        for(int j=1; j<=n ; j++){   //------ O(n)
            cout << "Hello " <<k << endl ;
            k++ ;
        } 
    }
// complexity = O(n*n) -> O(n²)
    return 0 ;
}