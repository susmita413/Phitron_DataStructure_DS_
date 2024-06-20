// https://www.hackerrank.com/contests/assignment-01-a-basic-data-structure-a-batch-05/challenges

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    long long a[n] ;
    for(int i=0; i<n ; i++){
        cin>> a[i] ;
    }
    
    sort(a, a+n) ;
    int flag=0 ;

    for(int i=0; i<n ; i++){
        long long find = a[i];
        if(a[i+1]==find || a[i-1] ==find){
            flag =1 ;
            break;
        }
    }

    
    if(flag ==1){ 
        cout<<"YES" << endl ;
    }
    else{
        cout<<"NO" << endl ;
    }


    return 0 ;
}