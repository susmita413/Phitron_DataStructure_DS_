#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v;
    int n;  cin>> n; 
    for(int i=0; i<n ;i++) {  //input (1st way)
        int x;
        cin>> x ;
        v.push_back(x) ;
    }

    vector<int> v2(n) ;
    for(int i=0; i<n; i++){  //input (2nd way)
        cin>> v2[i] ;
    }
    
    
    cout<< endl ;
    for(int val: v){          // output
        cout<< val << " " ;
    }
    cout<< endl<<endl ;

    for(int val: v2){          // output
        cout<< val << " " ;
    }

    return 0 ;
}

/*
5
12 13 14 -15 -16
40 50 -60 -70 80 

*/